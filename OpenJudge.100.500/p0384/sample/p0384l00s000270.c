/*
AOJ - ITP1_8_a
Date: 20181003
Author: Mikoron * ♡mikoiwate♡
 */

#define MAX 1200

#include<stdio.h>

int main(void) {
        short i;
        char words[MAX];

        fgets(words, sizeof(words), stdin);

        i = 0;
        while(words[i] != '\0') {
                if(words[i] > 64 && words[i] < 91) words[i] += 32;
                else if(words[i] > 96 && words[i] < 123) words[i] -= 32;
                printf("%c", words[i]);
                i++;
        }

        return 0;
}

