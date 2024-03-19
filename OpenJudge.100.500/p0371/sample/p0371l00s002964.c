#include<stdio.h>
#include<stdlib.h>

int main(void){
        long long int n,i,min=1000001,max=-1000001,sum=0;
        int *m;

        scanf("%lld",&n);
        m = malloc(sizeof(int) * n);

        for(i=0; i<n; i++){
                scanf("%d",&m[i]);
                if(m[i] < min)
                        min = m[i];
                if(m[i] > max)
                        max = m[i];
                sum += m[i];
        }

        printf("%lld %lld %lld\n",min, max, sum);
        free(m);

        return 0;
}