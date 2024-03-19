#include <stdio.h>
#include<string.h>
int main () {
    char deck[205], temp;
    int m, h, l, i;
    while(1){
        scanf("%s", &deck);
        l = strlen(deck);
        if(l == 1 && deck[0] == '-')break;
        scanf("%d", &m);
        while(m--){
            scanf("%d", &h);
            while(h--){
                temp = deck[0];
                for(i=0;i<l-1;i++)deck[i] = deck[i+1];
                deck[i] = temp;
            }
        }
        printf("%s\n", deck);
    }
    return 0;
}

