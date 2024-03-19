#include<stdio.h>
main(){
    int a,i,n,max,min;
    long sum;
    scanf("%d",&n);
    scanf("%d",&a);
    max=a;
    min=a;
    sum=a;
    for(i=1;i<n;i++){
        scanf("%d",&a);
        if(a<min)min=a;
        if(max<a)max=a;
        sum=sum+a;
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}