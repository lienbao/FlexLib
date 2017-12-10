/**
 * Copyright (c) 2017-present, zhenglibao, Inc.
 * email: 798393829@qq.com
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */


#import <Foundation/Foundation.h>

typedef struct {
    const char* name;
    int   value;
} NameValue;

#define FLEXSTR2INT(kvTable)    \
NSString2Int(sValue,kvTable,sizeof(kvTable)/sizeof(NameValue))


// 在表中查询s字符串，将其转换成int值
int String2Int(const char* s,
               NameValue table[],
               int total);

int NSString2Int(NSString* s,
                 NameValue table[],
                 int total);

// 字符串转换成颜色值，格式：black or #rrggbb or #aarrggbb
UIColor* colorFromString(NSString* clr);

// eg: white/black/....
UIColor* systemColor(NSString* clr);

// 字符串转换BOOL
BOOL String2BOOL(NSString* s);

BOOL IsIphoneX(void);

BOOL IsPortrait(void);

