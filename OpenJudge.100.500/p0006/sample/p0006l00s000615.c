#include <stdio.h>
int main (void){
    int n,debt=100000,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        debt*=1.05;
        if(debt%1000!=0){
            debt=((debt/1000)+1)*1000;
        }
    }
    printf("%d\n",debt);
    return 0;
}