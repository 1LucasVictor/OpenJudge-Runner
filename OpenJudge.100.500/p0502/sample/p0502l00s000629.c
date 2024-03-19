#include<stdio.h>
int main()
{
    int N,i,a,A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    a=1;
    for(i=0;i<N;i++){
        if(A[i]%2==0){
          if(A[i]%3==0||A[i]%5==0)
           a=1;
        else{
            a=0;
            break;
        }
    }
    }
    if(a==0)
       printf("DENIED\n");
     else
       printf("APPROVED\n");
      return 0;
}
