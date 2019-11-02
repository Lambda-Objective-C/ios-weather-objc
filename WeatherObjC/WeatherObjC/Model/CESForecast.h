//
//  CESForecast.h
//  WeatherObjC
//
//  Created by Seschwan on 11/1/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CESForecast : NSObject

@property NSString *city;
@property NSNumber *temperature;
@property UIImage *image;

- (instancetype)initWithCity:(NSString *)city
                 temperature:(NSNumber *)temperature
                       image:(UIImage *)image;

- (instancetype)initWithCity:(NSString *)city
                  dictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
