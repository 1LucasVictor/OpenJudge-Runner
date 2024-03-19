#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char * deck = malloc(sizeof(char) * 201);
    char * deck2 = malloc(sizeof(char) * 201);
    char stop = '-';
    char * point = &stop;
    int m, h;
    int i;

    while(1){
        scanf("%s", deck);
        if(deck[0] == stop) break;;
        //fgets(deck, sizeof(char) * 201, stdin);
        scanf(" %d", &m);

        for(i = 0; i < m; i++){
            scanf(" %d", &h);
            strncpy(deck2, &deck[h], strlen(deck) - h);
            //puts(deck2);
            strncat(deck2, deck, h);
            //puts(deck2);
            memset(deck, 0, sizeof(char) * 201);
            strncpy(deck, deck2, strlen(deck2));
            //puts(deck);
            memset(deck2, 0, sizeof(char) * 201);
        }
        printf("%s\n", deck);
    }
    free(deck);
    free(deck2);
    return(0);
}
