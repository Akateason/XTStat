//
//  NSObject+XTFMDB_Reflection.h
//  demo_XTFMDB
//
//  Created by teason23 on 2018/2/22.
//  Copyright © 2018年 teaason. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (XTFMDB_Reflection)

- (NSString *)className;
+ (NSString *)className;

- (NSString *)superClassName;
+ (NSString *)superClassName;

- (NSDictionary *)propertyDictionary;

- (NSArray*)propertyKeys;
+ (NSArray *)propertyKeys;

- (NSArray *)propertiesInfo;
+ (NSArray *)propertiesInfo;
+ (NSDictionary *)propertiesInfoDict ;
+ (NSString *)iosTypeWithPropName:(NSString *)name ;

+ (NSArray *)propertiesWithCodeFormat;

- (NSArray*)methodList;
+ (NSArray*)methodList;

- (NSArray*)methodListInfo;

//创建并返回一个指向所有已注册类的指针列表
+ (NSArray *)registedClassList;
//实例变量
+ (NSArray *)instanceVariable;

- (NSDictionary *)protocolList;
+ (NSDictionary *)protocolList;


- (BOOL)hasPropertyForKey:(NSString*)key;
- (BOOL)hasIvarForKey:(NSString*)key;

+ (NSString *)decodeType:(const char *)cString ;

@end
