#include<stdio.h>
#include<stdlib.h>

int main(void){
        int n,m,i,min=1000001,max=-1000001;
        long long int sum=0;

        scanf("%d",&n);

        for(i=0; i<n; i++){
                scanf("%d",&m);
                if(m < min)
                        min = m;
                if(m > max)
                        max = m;
                sum += m;
        }

        printf("%d %d %lld\n",min, max, sum);

        return 0;
}