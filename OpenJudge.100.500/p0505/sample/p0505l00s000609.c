 #include<stdio.h>
 int main(void)
 {
     long A[10000]={0};
     int H,N,i,j=0;
     scanf("%d%d",&H,&N);
     for(i=0;i<N;i++){
       scanf("%ld",&A[i]);
       j+=A[i];
     }
     if(H<=j) printf("Yes\n");
     else     printf("No\n");
   return 0;
 }
