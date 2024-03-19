#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, cislo = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if((a<=50000000)&&(b<=50000000)){
        for(int i=0; i <= 50000000; i++){
            if( abs(a-i)==abs(b-i)){
                cislo = i;
                break;
            }
            else{
            }
        }
    }
    else {
        for(int i=0; i <= 1000000000; i++){
            if( abs(a-i)==abs(b-i)){
                cislo = i;
                break;
            }
            else{
            }
        }
    }

    if(cislo == 0){
        printf("IMPOSSIBLE");
    }
    else{
        printf("%d", cislo);
    }

    return 0;
}
