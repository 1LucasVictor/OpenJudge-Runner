#include <stdio.h>
int main(void){
    int n;
    int i;
    int n5=0;
    int n7=0;

    for(i=0;i<3;i++){
        scanf("%d",&n);
        if(n==5){
            n5++;
        }
        if(n==7){
            n7++;
        }
    }

    if(n5==2&&n7==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}