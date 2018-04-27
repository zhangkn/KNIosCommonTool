
//

#import <Foundation/Foundation.h>

typedef enum
{
    ENVRIONMENTAL_VARIABLES_PRODUCTION = 0,  // 生产
    ENVRIONMENTAL_VARIABLES_PRE ,  // 预投产
    ENVRIONMENTAL_VARIABLES_UAT, // UAT
    ENVRIONMENTAL_VARIABLES_SIT_INTRANET,  // SIT内网
    ENVRIONMENTAL_VARIABLES_SIT_EXTRANET  // SIT外网
}ENVRIONMENTAL_VARIABLES;

@interface HCPEnvrionmentalVariables : NSObject

// 环境变量
@property (nonatomic, assign) ENVRIONMENTAL_VARIABLES envrionmentalVariables;


//HSSingletonH(EnvrionmentalVariables);
+(instancetype)shareEnvrionmentalVariables;

@end
