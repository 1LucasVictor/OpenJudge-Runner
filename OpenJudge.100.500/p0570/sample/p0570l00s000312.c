#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, cislo;
    scanf("%d", &a);
    scanf("%d", &b);

     if(((a+b)%2)==0){
        printf("%d", ((a+b)/2));
     }
     else{
        printf("impossible");
     }

    return 0;
}
