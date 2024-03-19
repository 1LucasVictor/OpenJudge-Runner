//
//  main.c
//  ITP1_8_B
//
//  Created by k16031kk on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    char input[1000];
    while(1) {
        x=0;
        for(int i=0; i<1000; i++) {
            scanf("%c", &input[i]);
            if(input[0]=='0') break;
            if(input[i]=='\n') {
                printf("%d\n", x);
                break;
            }
            x+=input[i]-'0';
        }
        if(x==0) break;
    }
    return 0;
}

