#include<stdio.h>

int main(){
        int a,b;
        scanf("%d %d\n",&a,&b);
        if(a*b%2){puts("Odd");
        }
        else{
                puts("Even");
        }
        return 0;
}