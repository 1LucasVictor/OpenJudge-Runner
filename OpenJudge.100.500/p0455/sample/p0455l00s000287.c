//
//  main.c
//  Calc
//
//  Created by k19031kk on 2020/06/27.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int sum = 0;
    scanf("%d",&a);
    
    sum = a + (a * a) + (a * a * a);
    printf("%d\n",sum);
    return 0;
}
