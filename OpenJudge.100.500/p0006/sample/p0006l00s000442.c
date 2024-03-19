#include <stdio.h>

int main(void)
{
    int n,i,result=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        result=result*1.05;
        if(result%1000!=0){
            result=result-result%1000+1000;
        }
    }
    printf("%d\n",result);
    return 0;
}