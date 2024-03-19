#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, m, h, len;
    char cards[201], temp[201];
     
    while(1) {
        scanf("%s",cards);
        if(strcmp(cards,"-") == 0) break;
        len = strlen(cards);
        scanf("%d",&m);
        for (i=0; i<m; i++) {
            scanf("%d",&h);
            strcpy(temp,cards);
            strcpy(cards,&temp[h]);
            strncpy(&cards[len - h],temp,h);
            cards[len] = '\0';
        }
        printf("%s\n",cards);
    }
    return 0;
}