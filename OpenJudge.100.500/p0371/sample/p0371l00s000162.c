#include<stdio.h>
int main(void){
    int a,i,n,min=1000000,max=-1000000;
    long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
        if(min>a){
            min=a;
        }
        if(max<a){
            max=a;
        }  
    }
    printf("%d %d %ld\n",min,max,sum);
    return 0;
}
