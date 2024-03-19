#include<stdio.h>
int main()
{
    int n,a,i,max=-1000000,min=1000000;
    long long sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);

    if(a>max){
        max=a;
    }
    else if(a<min){
        min=a;
    }
    sum=sum+a;
}
printf("%d %d %lld\n",min,max,sum);
return 0;
}

