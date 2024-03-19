//
//  main.c
//  ITP1_4_D
//
//  Created by k16031kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    int a[n], min = 10000, max = -10000;
    long sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(i==0) {
            min=a[0];
            max=a[0];
        }
        sum+=a[i];
        if(min>a[i]) {
            min=a[i];
        }
        if(max<a[i]) {
            max=a[i];
        }
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}

