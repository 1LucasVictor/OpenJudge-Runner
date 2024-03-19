//
//  main.c
//  ITP1_4_C
//
//  Created by k16031kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 0, b = 0;
    char op = '\0';
    scanf("%d %s %d", &a, &op, &b);
    while(op!='?') {
        if(op=='+') {
            printf("%d\n", a+b);
        } if(op=='-') {
            printf("%d\n", a-b);
        } if(op=='*') {
            printf("%d\n", a*b);
        } if(op=='/') {
            printf("%d\n", a/b);
        }
        scanf("%d %s %d", &a, &op, &b);
    }
    
    return 0;
}

