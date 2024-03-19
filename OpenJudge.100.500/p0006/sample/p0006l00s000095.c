#include<stdio.h>
int main(void){

        int n;
        int j,a;
        double i;

        a=100000;
        i=0.05; /* interest */

        scanf("%d",&n);

        for(j=1;j<=n;j++){
        a=a*(1+i);
        }

        if((a%10000)>=5000){
        a=a/10000;
        a=a*10000;
        a=a+10000;
        }

        printf("%d\n",a);

        return 0;
}