#include<stdio.h>
int main(void){
        int n,debt;
        debt=100000;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
                debt*=1.05;
                if(debt-(int)(debt/1000.)*1000>0){
                        debt=(int)(debt/1000.+1)*1000;
                }
        }
        printf("%d\n",debt);
        return 0;
}