#include<stdio.h>

int main(){

    int a, b, maxi=0;

    scanf("%d",&a);
    scanf("%d",&b);


    if((a+b>a-b)&&(a+b>a*b)){
        maxi=a+b;
    }
    else if((a-b>a+b)&&(a-b>a*b)){
        maxi=a-b;
    }
    else{
        maxi=a*b;
    }
        printf("%d", maxi);

    return 0;
}
