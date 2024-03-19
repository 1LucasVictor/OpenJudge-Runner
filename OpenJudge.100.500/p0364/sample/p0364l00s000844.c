//
//  main.c
//  ITP1_2_D
//
//  Created by k16031kk on 2018/05/17.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W, &H, &x, &y, &r);
    int f=0;
    
    if(x+r>W)f=1;
    if(y+r>H)f=1;
    if(r>x)f=1;
    if(r>y)f=1;
    if(f==0)printf("Yes\n");
    else printf("No\n");
    
    return 0;
}

