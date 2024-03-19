#include<stdio.h>

int main()
{
    int a, b, i;

    scanf("%d", &a);
    
    for(i = 3; i <=a; i++){
        if(i%3 == 0) printf(" %d", i);
        else {b = i;
              while(b)
                   {if(b%10 == 3) {printf(" %d", b);
                                  break;}
                   else b /= 10;
                   }
              }
    }
    printf("\n");
    return 0;
}

