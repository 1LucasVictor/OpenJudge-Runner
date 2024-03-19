#include <stdio.h>
#include <string.h>

int main(void){
    char card[200], cardcp[200];
    int i, j, len, m, h;
    
    while(1) {
        scanf("%s", &card);
        if(card[0] == '-') break;
        
        len = strlen(card);
        scanf("%d", &m);
        for(i=0; i<m; i++) {
            scanf("%d", &h);
            for(j=0; j<h; j++) {
                cardcp[j] = card[j];
            }
            for(j=h; j<len; j++) {
                card[j-h] = card[j];
            }
            for(j=0; j<h; j++) {
                card[j+len-h] = cardcp[j];
            }
        }
        printf("%s\n", card);
    }
    return 0;
}
