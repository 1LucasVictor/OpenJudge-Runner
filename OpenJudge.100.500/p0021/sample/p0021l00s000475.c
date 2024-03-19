#include <stdio.h>
#include <math.h> 
int main(){
    int i,n,t;
    while(scanf("%d",&n)!=0){
        if(n==0)break;
        long int data[5100]={0};
        double max=0,sum=0;
        for(i=0;i<n;i++){
            scanf("%ld",&data[i]);
            if(i==0){
                max=data[i];
            }
        }
        max = -10000000;
        for(i=0;i<n;i++){
            sum=0;
            for(t=i;t<n;t++){
                sum+=data[t];
                if(sum>max)max=sum;
            }
        }
        printf("%.0lf\n",max);
    }
    return 0;
}