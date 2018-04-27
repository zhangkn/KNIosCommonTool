
//

#import "HCPEnvrionmentalVariables.h"
#import "HSSingleton.h"
@implementation HCPEnvrionmentalVariables


//+ (id)sharedInstance {
//    static dispatch_once_t once;
//    static id instance;
//    dispatch_once(&once, ^{
//        instance = [[self alloc] init];
//    });
//    return instance;
//}


//+(instancetype)shareEnvrionmentalVariables

HSSingletonM(EnvrionmentalVariables);

@end
