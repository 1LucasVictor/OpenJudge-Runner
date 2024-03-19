//
//  main.c
//  ITP1_9_D
//
//  Created by k16031kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[1000];
    int q=0;
    scanf("%s", str);
    scanf("%d", &q);
    
    for(int i=0; i<q; i++) {//q回命令実行
        int a=0, b=0;
        char order[10];
        scanf("%s", order);
        
        if(strcmp(order,"print")==0) {//printと入力
            scanf("%d %d", &a, &b);
            for(int i=a; i<=b; i++) {
                printf("%c", str[i]);
            }
            printf("\n");
        }
        if(strcmp(order,"reverse")==0) {//reverseと入力
            scanf("%d %d", &a, &b);
            for(int i=a; i<=(b+1)/2; i++) {
                char tmp=str[i];
                str[i]=str[a+b-i];
                str[a+b-i]=tmp;
            }
        }
            //printf("%s\n",str);
        //}
        else if(strcmp(order,"replace")==0) {//replaceと入力
            char ch[1000]={};
            scanf("%d %d", &a, &b);
            scanf("%s", ch);
            
            int i, j;
            for(i=a, j=0; i<=b; i++, j++) {
                str[i]=0;
                str[i]=ch[j];
            }
        }
    }
    
    return 0;
}

