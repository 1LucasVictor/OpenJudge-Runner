#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int add = a+b;
    int sub = a-b;
    int mult = a*b;
    if(add>sub&&add>mult){
        printf("%i\n",add);
    }else if(sub>add&&sub>mult){
        printf("%i\n",sub);
    }else{
        printf("%i\n",mult);
    }
    return 0;
} 