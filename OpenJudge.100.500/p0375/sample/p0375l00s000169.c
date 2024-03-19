//
//  main.c
//  ITP1_5_D
//
//  Created by k16031kk on 2018/05/22.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

void call(int n, int i) {
    if(n%10==3) {
        printf(" %d", i);
    }
}
    
int main(int argc, const char * argv[]) {
    // insert code here...
    int n,x;
    //int count=0;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        x=i;
        //count++;
        if(x%3==0) {
            printf(" %d", x);
        } else if(x%10==3) {
            printf(" %d", x);
        } else {
            x/=10;
            if(x>=10) x/=10;
            call(x, i);
        }
    }
    printf("\n");
    return 0;
}

