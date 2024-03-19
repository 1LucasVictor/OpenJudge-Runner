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
    int a[n], min = 1000000, max = -1000000, sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
        if(min>a[i]) {
            min=a[i];
        }
        if(max<a[i]) {
            max=a[i];
        }
    }
    printf("%d %d %d\n", min, max, sum);
    return 0;
}

