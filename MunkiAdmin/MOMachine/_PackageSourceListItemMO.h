// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PackageSourceListItemMO.h instead.

#import <CoreData/CoreData.h>


extern const struct PackageSourceListItemMOAttributes {
	__unsafe_unretained NSString *isGroupItem;
	__unsafe_unretained NSString *originalIndex;
	__unsafe_unretained NSString *title;
	__unsafe_unretained NSString *type;
} PackageSourceListItemMOAttributes;

extern const struct PackageSourceListItemMORelationships {
	__unsafe_unretained NSString *children;
	__unsafe_unretained NSString *packages;
	__unsafe_unretained NSString *parent;
} PackageSourceListItemMORelationships;

extern const struct PackageSourceListItemMOFetchedProperties {
} PackageSourceListItemMOFetchedProperties;

@class PackageSourceListItemMO;
@class PackageMO;
@class PackageSourceListItemMO;






@interface PackageSourceListItemMOID : NSManagedObjectID {}
@end

@interface _PackageSourceListItemMO : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PackageSourceListItemMOID*)objectID;





@property (nonatomic, strong) NSNumber* isGroupItem;



@property BOOL isGroupItemValue;
- (BOOL)isGroupItemValue;
- (void)setIsGroupItemValue:(BOOL)value_;

//- (BOOL)validateIsGroupItem:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* originalIndex;



@property int32_t originalIndexValue;
- (int32_t)originalIndexValue;
- (void)setOriginalIndexValue:(int32_t)value_;

//- (BOOL)validateOriginalIndex:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* title;



//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* type;



//- (BOOL)validateType:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *children;

- (NSMutableSet*)childrenSet;




@property (nonatomic, strong) NSSet *packages;

- (NSMutableSet*)packagesSet;




@property (nonatomic, strong) PackageSourceListItemMO *parent;

//- (BOOL)validateParent:(id*)value_ error:(NSError**)error_;





@end

@interface _PackageSourceListItemMO (CoreDataGeneratedAccessors)

- (void)addChildren:(NSSet*)value_;
- (void)removeChildren:(NSSet*)value_;
- (void)addChildrenObject:(PackageSourceListItemMO*)value_;
- (void)removeChildrenObject:(PackageSourceListItemMO*)value_;

- (void)addPackages:(NSSet*)value_;
- (void)removePackages:(NSSet*)value_;
- (void)addPackagesObject:(PackageMO*)value_;
- (void)removePackagesObject:(PackageMO*)value_;

@end

@interface _PackageSourceListItemMO (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveIsGroupItem;
- (void)setPrimitiveIsGroupItem:(NSNumber*)value;

- (BOOL)primitiveIsGroupItemValue;
- (void)setPrimitiveIsGroupItemValue:(BOOL)value_;




- (NSNumber*)primitiveOriginalIndex;
- (void)setPrimitiveOriginalIndex:(NSNumber*)value;

- (int32_t)primitiveOriginalIndexValue;
- (void)setPrimitiveOriginalIndexValue:(int32_t)value_;




- (NSString*)primitiveTitle;
- (void)setPrimitiveTitle:(NSString*)value;




- (NSString*)primitiveType;
- (void)setPrimitiveType:(NSString*)value;





- (NSMutableSet*)primitiveChildren;
- (void)setPrimitiveChildren:(NSMutableSet*)value;



- (NSMutableSet*)primitivePackages;
- (void)setPrimitivePackages:(NSMutableSet*)value;



- (PackageSourceListItemMO*)primitiveParent;
- (void)setPrimitiveParent:(PackageSourceListItemMO*)value;


@end
