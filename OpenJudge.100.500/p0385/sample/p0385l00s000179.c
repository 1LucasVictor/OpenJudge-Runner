#include <stdio.h>

int main(void){
    char x[1000];
    int y = 0;
    int j = 0;
    int q, k;
    while(1){
        scanf("%c", &x[j]);
        if(x[0] == '0')
            break;
        if(x[j] == 10){
            for(q = 0; q < j; q++){
                y += (x[q] - '0');
            }
            printf("%d\n", y);
            j = 0;
            y = 0;
            continue;
        }
        j++;
    }
    
    return 0;
}
