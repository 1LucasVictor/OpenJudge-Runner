#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    int cislo = 0;

    for(int i=0; i <= 1000000000; i++){
        if( abs(a-i)==abs(b-i)){
            cislo = i;
            break;
        }
        else{
        }
    }
    
    if(cislo == 0){
        printf("impossible");
    }
    else{
        printf("%d", cislo);
    }


    return 0;
}