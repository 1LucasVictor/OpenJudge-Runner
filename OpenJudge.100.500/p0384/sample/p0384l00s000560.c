#include <stdio.h>

int main(void){
    char word[1300];
    int j;
    fgets(word, 1300, stdin);
    j = 0;
    while(1){
        if('a' <= word[j] && word[j] <= 'z')
            word[j] -= 32;
        else if('A' <= word[j] && word[j] <= 'Z')
            word[j] += 32;
        if(word[j] == 10)
            break;
        j++;
    }
    
    printf("%s", word);
    return 0;
}
