#include<stdio.h>
int main(void){
    int a,num[100000]={},i,max,min;
    long int sum;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    sum=0;
    for(i=0;i<a;i++){
        if(max<num[i]){max=num[i];}
        if(min>num[i]){min=num[i];}
        sum+=num[i];
    }
    printf("%d %d %ld\n",min,max,sum);
    return 0;
}