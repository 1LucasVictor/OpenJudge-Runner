#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int deck_len = 205;

char *shuffle_n_card(char *deck, int shuffle_num){
    char *deck_copied;
    deck_copied = (char*)malloc(deck_len*sizeof(char));
    memset(deck_copied, '\0', sizeof(deck_copied));

    deck += shuffle_num;
    strcpy(deck_copied, deck);

    deck -= shuffle_num;
    strncat(deck_copied, deck, shuffle_num);

    strcpy(deck, deck_copied);
    return deck;
}

int main(){
    char *deck_string;
    deck_string = (char*)malloc(deck_len*sizeof(char));
    int i, shuffle;
    
    while(1){
        scanf("%s", deck_string);
        if(!strcmp(deck_string, "-"))break;
        int num_of_shuffle;
        scanf("%d", &num_of_shuffle);
        for(i=0; i<num_of_shuffle; i++){
            scanf("%d", &shuffle);
            shuffle_n_card(deck_string, shuffle);
        }
        printf("%s\n", deck_string);
    }
}

