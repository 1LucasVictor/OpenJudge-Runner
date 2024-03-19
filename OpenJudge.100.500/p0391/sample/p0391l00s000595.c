/*
AOJ - ITP1_9_d
Date: 20181009
Author: Mikoron * ♡mikoiwate_351♡
*/

#define STRMAX 1001
#define COMMAX 11

#include<stdio.h>
#include<string.h>

int main(void) {
        char words[STRMAX], com[COMMAX], replace[STRMAX];
        short i, j, com_num, a, b;

        scanf("%s", words);
        scanf("%hd", &com_num);

        for(i = 0; i < com_num; i++) {
                scanf("%s", com);
                if(!(strcmp(com,"print"))) {
                        scanf("%hd %hd", &a, &b);
                        for(j = a; j <= b; j++) printf("%c", words[j]);
                        printf("\n");
                }
                else if(!(strcmp(com,"reverse"))) {
                        scanf("%hd %hd", &a, &b);
                        strcpy(replace,words);
                        for(j = a; j <= b; j++) words[j] = replace[b+a-j];
                }
                else if(!(strcmp(com,"replace"))) {
                        scanf("%hd %hd %s", &a, &b, replace);
                        for(j = a; j <= b; j++) words[j] = replace[j-a];
                }
        }
        return 0;
}

