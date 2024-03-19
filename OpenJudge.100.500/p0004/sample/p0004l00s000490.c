#include<stdio.h>
  int main(void){
      int i,j,m,n,a,b,c,M,N;
       while(scanf("%d %d",&m,&n)!=EOF){
        M=m;
        N=n;
        if(n>m){
         a=m;
         m=n;
         n=a;
               }
        while(m%n!=0){
        i=m%n;
        m=n;
        n=i;
        }
        b=N/i*M;

        printf("%d %d\n",i,b);
        }
        return 0;
        }