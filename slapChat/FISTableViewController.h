//
//  FISTableViewController.h
//  slapChat
//
//  Created by Joe Burgess on 6/27/14.
//  Copyright (c) 2014 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Message.h"
#import "FISDataStore.h"

@interface FISTableViewController : UITableViewController

@property (strong, nonatomic) NSArray *messages;

@end
