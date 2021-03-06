//
//  AddItemsWindow.h
//  MunkiAdmin
//
//  Created by Juutilainen Hannes on 19.10.2011.
//

#import <Cocoa/Cocoa.h>
#import "PackageArrayController.h"
#import "ApplicationsArrayController.h"
#import "GradientBackgroundView.h"

@interface SelectPkginfoItemsWindow : NSWindowController <NSTextFieldDelegate> {
    BOOL shouldHideAddedItems;
}

@property (weak) IBOutlet NSSearchField *groupedSearchField;
@property (weak) IBOutlet NSSearchField *individualSearchField;
@property (strong) NSPredicate *hideAddedPredicate;
@property BOOL shouldHideAddedItems;
@property (weak) IBOutlet PackageArrayController *individualPkgsArrayController;
@property (weak) IBOutlet ApplicationsArrayController *groupedPkgsArrayController;
@property (weak) IBOutlet NSTabView *tabView;
@property NSInteger currentMode;
@property (weak) IBOutlet NSTextField *customValueTextField;
@property (weak) IBOutlet GradientBackgroundView *indSearchBgView;
@property (weak) IBOutlet GradientBackgroundView *groupSearchBgView;
@property (weak) IBOutlet GradientBackgroundView *customBgView;

- (NSArray *)selectionAsStringObjects;
- (void)updateGroupedSearchPredicate;
- (void)updateIndividualSearchPredicate;

@end
