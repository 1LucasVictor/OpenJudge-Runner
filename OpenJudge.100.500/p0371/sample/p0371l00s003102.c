#include<stdio.h>
#include <string.h>


int main(void){
    int num,x[100000],i;
    int min=1000000,max=-1000000,sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&x[i]);
        sum = sum+x[i];
        if(min>=x[i]){
        min = x[i];
        }
        if(max<=x[i]){
        max = x[i];
        }
    }
    printf("%d %d %d\n",min,max,sum);

    return 0;
}