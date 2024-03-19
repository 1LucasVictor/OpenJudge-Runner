//
//  main.c
//  ITP1_9_B
//
//  Created by k16031kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[200];
    //char str_copy[200];
    //char str_copy_copy[200];
    //char shuffle[200];
    int m=0, h=0, len=0;
    while(1) {
        scanf("%s", str);
        if(str[0]=='-') break;
        len=strlen(str);
        //strcpy(str_copy, str);
        //printf("%d\n",len);
        scanf("%d", &m);
        
        for(int i=0; i<m; i++) {//m回シャッフル
            scanf("%d", &h);//位置決め
            //printf("%d\n",h);
            char shuffle[200]={};
            char str_copy[200]={};
            strncpy(shuffle, str, h);//シャッフルする位置を決める
            //printf("%s\n",shuffle);
            /*for(int i=0; i<len-h; i++) {
                str_copy[i]=str_copy[h+i];
            }
            */
            int i,j;
            for(i=h, j=0; i<len; i++, j++) {//残ったカードを0から格納し直す
                str_copy[j]=str[i];
                //printf("%c\n",str_copy[j]);
            }
            strcat(str_copy,shuffle);//新しい並びになる
            //printf("%s\n",str_copy);
            strcpy(str, str_copy);
        }
        printf("%s\n",str);
    }
    
    return 0;
}

