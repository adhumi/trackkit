//
//  GKBounds.swift
//  Pods
//
//  Created by Jelle Vandebeeck on 15/03/16.
//
//

import Foundation
import CoreLocation
import AEXML

/**
 The bounds define the extend of the GPX file. The area of the rectangle _-defined by the minimum coordinate and the maximum coordinate-_ will contain the entire GPX region.
*/
public final class GKBounds {
    /// The minimum coordinate used for the calculation of the region rectangle.
    public var minimumCoordinate: CLLocationCoordinate2D?
    /// The maximum coordinate used for the calculation of the region rectangle.
    public var maximumCoordinate: CLLocationCoordinate2D?
}

extension GKBounds: GKMappable {
    
    convenience init?(fromElement element: AEXMLElement) {
        // When the element misses some coordinate data, don't create the instance.
        guard let minimumLatitude = element.attributes["minlat"], let minimumLongitude = element.attributes["minlon"], let maximumLatitude = element.attributes["maxlat"], let maximumLongitude = element.attributes["maxlon"] else {
            return nil
        }
        self.init()
        
        minimumCoordinate <~ (Double(minimumLatitude)!, Double(minimumLongitude)!)
        maximumCoordinate <~ (Double(maximumLatitude)!, Double(maximumLongitude)!)
    }
    
}