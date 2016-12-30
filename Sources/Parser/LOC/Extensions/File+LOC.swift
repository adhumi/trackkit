//
//  TrackKit
//
//  Created by Jelle Vandebeeck on 15/03/16.
//

import AEXML

extension File {

    convenience init(loc rootElement: AEXMLElement) throws {
        // When the element is an error, don't create the instance.
        if rootElement.attributes["version"] != "1.0" {
            throw TrackParseError.invalidVersion
        }
        self.init(type: .loc)

        // Fetch the creator from the root element.
        source = rootElement.attributes["src"]

        waypoints <~ rootElement["waypoint"].all?.flatMap { Point(loc: $0) }
    }

}