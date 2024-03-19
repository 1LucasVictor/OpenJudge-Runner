/*
AOJ - ITP1_9_b
Date: 20181007
Author: Mikoron * ♡mikoiwate_351♡
 */

#define STRMAX 201

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
        char str[STRMAX], str_buf[STRMAX];
        short i, j, shf_cnt, shf_num, str_num;

        while(1) {
                scanf("%s", str);
                if(!(strcmp(str,"-"))) break;
                str_num = (short)strlen(str);
                scanf("%hd", &shf_cnt);
                for(i = 0; i < shf_cnt; i++) {
                        scanf("%hd", &shf_num);
                        strcpy(str_buf,str);
                        for(j = 0; j < str_num; j++) {
                                if(j < shf_num) str[str_num-shf_num+j] = str_buf[j];
                                else str[j-shf_num] = str_buf[j];
                        }
                }
                printf("%s\n", str);
        }
        return 0;
}

