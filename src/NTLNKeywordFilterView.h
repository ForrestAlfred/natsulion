// Based on NTLNFilterController.m created by mootoh on 4/30/08.
// http://blog.deadbeaf.org/2008/05/01/hack-natsulion-to-filter-messages/

#import <Cocoa/Cocoa.h>
#import "NTLNFilterView.h"

@class NTLNMessageListViewsController;
@class NTLNMessageTableViewController;

@interface NTLNKeywordSearchField : NSSearchField {
    
}

- (void) setupColors;
@end

@interface NTLNKeywordFilterView : NSView<NTLNFilterViewContent> {
    IBOutlet NTLNKeywordSearchField *searchTextField;
    IBOutlet NTLNMessageListViewsController *messageListViewsController;
    IBOutlet NTLNMessageTableViewController *messageTableViewController;
}

- (IBAction) filter:(id)sendar;
- (void) filter;
- (void) filterByQuery:(id)query;
- (void) postOpen;
- (void) postClose;

@end
