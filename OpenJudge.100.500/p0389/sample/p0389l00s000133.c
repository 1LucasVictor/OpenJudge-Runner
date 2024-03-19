#include<stdio.h>
#include<string.h>

void shuffle (char word[300], int h);

int main () {
    char word[300];
    int m, h;
    scanf("%s", word);
    while (strcmp(word, "-") != 0) {
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &h);
            shuffle(word, h);
        }
        printf("%s\n", word);
        scanf("%s", word);
    }
}

void shuffle (char word[300], int h) {
    int i, j;
    char save1[300];
    char save2[300];
    for (i = 0; i < 300; i++) {
        save1[i] = '\0';
        save2[i] = '\0';
    }
    strncpy(save1, word, h);
    for(i = h, j = 0; i < strlen(word); i++, j++){
        save2[j] = word[i];
    }
    strcat(save2, save1);
    strcpy(word, save2);
}
