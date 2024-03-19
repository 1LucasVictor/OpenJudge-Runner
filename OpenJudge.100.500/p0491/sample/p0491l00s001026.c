 #include<stdio.h>
 int main(void)
 {
     int N,K,s,t;
     scanf("%d%d",&N,&K);
     if(N%K==0) printf("0\n");

     if(N%K!=0){
      while(N>K)
       N+=-K;

     if(N<K-N) printf("%d\n",N);
     else    printf("%d\n",K-N);
     }

     return 0;
 }
