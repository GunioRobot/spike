//
//  LogDocument.h
//  Spike
//
//  Created by Matt Mower on 18/02/2009.
//  Copyright 2009 LucidMac Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class AppController;
// @class RequestDetailsController;

@interface LogDocument : NSDocument {
            BOOL                      compressedLog;
            NSArray                   *requests;
            
            NSPredicate               *filterPredicate;
            
  IBOutlet  NSArrayController         *requestsController;
  IBOutlet  NSToolbar                 *toolbar;
  IBOutlet  NSSearchField             *searchField;
            NSToolbarItem             *focusToolbarItem;
}

@property             BOOL                compressedLog;
@property (assign)    NSArray             *requests;
@property (assign)    NSArrayController   *requestsController;

- (IBAction)removeSimilarRequests:(id)sender;
- (IBAction)focusOnRequest:(id)sender;

@end
