#include<stdio.h>
int main(){
        int i,j,a,max,min;
        max=-1000000;min=1000000;
        long sum; sum=0;
        scanf("%d\n",&j);
        for(i=0;i<j;i++){
                scanf("%d",&a);
                if(a<=min)min=a;
                if(a>=max)max=a;
                sum+=a;}
                printf("%d %d %ld\n",min,max,sum);
                return 0;}