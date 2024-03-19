#include<stdio.h>

int main(void){
    int n,i=1,x;

    scanf("%d",&n);

    while(i<n+1){
        x=i;
        if(x%3==0 || x%10==3) printf(" %d",i);
        else{
            while(x!=0){
                x/=10;
                if(x==3 || x%10==3){
                    printf(" %d",i);
                    break;
                }
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}
