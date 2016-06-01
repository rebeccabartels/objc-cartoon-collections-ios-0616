//  FISAppDelegate.h

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


- (NSArray *)stringByRollCallingDwarfsInArray: (NSString *)dwarfs;
- (NSArray *)arrayOfPlaneteerShoutsFromArray: (NSArray *)powers;
- (NSArray *)summonCaptainPlanetWithPOwers: (NSString *)powers;
- (NSArray *)firstPremiumCheeseInStock:premiumCheeseNames:(NSString *)premiumCheeseNames;
- (NSArray *)arrayByConvertingMoneyBagsIntoPaperBills:(NSArray *)moneyBags;
- (NSString *)stringByRollCallingDwarfsInArray:(NSInteger ="1|2|3|4|5|6|7|");




@end
