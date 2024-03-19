#include<stdio.h>

int main(void){
    int n,a,b;
    scanf("%d",&n);

    if (n%2==0){
        a=n/2;
        printf("%d\n",a);
    }else{
        b=(n+1)/2;
        printf("%d\n",b);
    }
   return 0; 
}
