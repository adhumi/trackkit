//
//  ActivityExample.m
//  Test
//
//  Created by Jelle Vandebeeck on 07/01/2018.
//  Copyright © 2018 Jelle Vandebeeck. All rights reserved.
//

#import "ActivityExample.h"

#import <Fit/Fit.h>

@interface ActivityExample ()

@property (nonatomic, strong) FitReader *reader;

@end

@implementation ActivityExample

- (instancetype)initWithFilename:(NSString *)filename {
    if (self = [super init]) {
        NSString *filepath = [[NSBundle mainBundle] pathForResource:filename ofType:@"fit"];
        self.reader = [[FitReader alloc] initWithPath:filepath];
    }
    return self;
}

- (void)read {
    [self.reader read];
    NSLog(@"🔥 Found %lu records", (unsigned long)[self.reader.records count]);
}

@end