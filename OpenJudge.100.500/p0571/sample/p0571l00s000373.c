//
//  main.c
//  program3-2
//
//  Created by 木元颯人 on 2019/02/21.
//  Copyright © 2019 木元颯人. All rights reserved.
//

#include <stdio.h>

int main(void){
    int a,b,n;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    if(a*n<b){
        printf("%d",a*n);
    }else{
        printf("%d",b);
    }
}
