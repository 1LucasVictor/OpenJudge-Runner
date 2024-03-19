#include <stdio.h>

int main(void){

    int a, b, i=0, count1=0, count2=0;
    scanf("%d",&a);

    while(i<a){
        scanf("%d",&b);

        if(b%2==0){
            count2++;
        }

        if(b%2==0 && b%3==0){
            count1++;
        }else if(b%2==0 && b%5==0){
            count1++;
        }
        i++;
    }

    if(count1 == count2){
        printf("APPROVED");
    }else{
        printf("DENIED");
    }

    return 0;
}