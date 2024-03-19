#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int numz=0,numo=0;
    while((c = getchar()) != '\n'){
        if(c == '0'){
            numz++;
        }else{
            numo++;
        }
    }

    if(numz < numo){
        printf("%d",numz*2);
    }else{
        printf("%d",numo*2);
    }

    return 0;
}