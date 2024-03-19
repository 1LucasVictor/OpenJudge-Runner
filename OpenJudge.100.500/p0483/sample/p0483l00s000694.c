#include <stdio.h>

int main(void){
    int i,a,b,c;
    scanf("%d",&a);

    b = a /100;
    c = (a-b*100) /10;

    if(b == 7){
        printf("Yes");
    }else if(c == 7){
        printf("Yes");
    }else if(a-b*100-c*10==7){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}