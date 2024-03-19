#include<stdio.h>

int main(){

    int a, b;

    scanf("%d",&a);
    scanf("%d",&b);

    int maxi=-1;

    if(a+b>maxi){
        maxi=a+b;
    }
    if(a-b>maxi){
        maxi=a-b;
    }
    if(a*b>maxi){
        maxi=a*b;
    }
        printf("%d", maxi);

    return 0;
}
