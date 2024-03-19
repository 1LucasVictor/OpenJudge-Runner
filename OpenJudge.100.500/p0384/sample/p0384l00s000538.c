//
//  main.c
//  ITP1_8_A
//
//  Created by k16031kk on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str;
    int ch=0;
    while(1) {
        scanf("%c", &str);
        if(str=='\n') break;
        if('a'<=str && str<='z') {
            ch=(int)str;
            ch=str-32;
            printf("%c",ch);
        } else if('A'<=str && str<='Z') {
            ch=(int)str;
            ch=str+32;
            printf("%c",ch);
        } else {
            printf("%c",str);
        }
    }
    printf("\n");
    return 0;
}

