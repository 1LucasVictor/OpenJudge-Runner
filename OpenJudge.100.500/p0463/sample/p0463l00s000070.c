#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int judge=n%10;
    if(judge==2 || judge==4 ||judge ==5 || judge ==7 || judge==9){
        printf("hon\n");
    }else if(judge==3){
        printf("bon\n");
    }else{
        printf("pon\n");
    }
    return 0;
}
