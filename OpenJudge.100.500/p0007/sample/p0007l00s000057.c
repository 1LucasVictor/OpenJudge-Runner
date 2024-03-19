#include <stdio.h>

int main(){
    int a,b,c,n,counter=0;
    while (scanf("%d",&n) !=EOF) {
        for (a=0; a<=9; a++)
            for (b=0; b<=9; b++)
                for (c=0; c<=9; c++)
                    if (0<=n-a-b-c && n-a-b-c<=9)
                        counter++;
                    
        printf("%d\n",counter);
        counter=0;
    }
    
    return 0;
}