//
//  IdleEvent.h
//  kopsik_ui_osx
//
//  Created by Tanel Lebedev on 04/11/2013.
//  Copyright (c) 2013 TogglDesktop developers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IdleEvent : NSObject
@property (strong) NSDate *started;
@property (strong) NSDate *finished;
@property int seconds;
@end
