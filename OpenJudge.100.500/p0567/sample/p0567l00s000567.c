#include <stdio.h>

int main (){
    int a=0;
    int b=0;
    int c=0;
    int temp=0;


    scanf("%d %d %d",&a,&b,&c);

    temp=c-(a-b);
    if(temp<0){
        printf("0\n");
    }else{
        printf("%d\n",temp);
    }

    return 0;
}