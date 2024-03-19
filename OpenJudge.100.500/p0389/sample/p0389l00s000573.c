#include <stdio.h>

void shuffle(char *word, int x)
{
    int j = 0, q = 0, k = 0;
    char text[210];
    for(j = 0; j < x; j++){
        text[j] = *(word + j);
    }
    while(1){
        *(word + q) = *(word + x + q);
        q++;
        if(*(word + x + q) == '\0')
            break;
    }
    while(1){
        *(word + q) = text[k];
        q++;
        k++;
        if(*(word + q) == '\0')
            break;
    }
    
}

int main(void){
    char word[210];
    int x, y, z;
    int j, q, k, a;
    
    while(1){
        scanf("%s", word);
        if(word[0] == '-')
            break;
        scanf("%d", &x);
        for(j = 0; j < x; j++){
            scanf("%d", &y);
            shuffle(word, y);
        }
        printf("%s\n", word);
    }
    return 0;
}
