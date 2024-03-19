#include<stdio.h>
# define N 10000
int main()
{
    int n,A[N],i,j,count=0,flag=0;
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }

   for(i=0;i<n;i++){
      // if(A[i]==2) flag++;
        for(j=3;j<=A[i];j+=2){
            if((A[i] % j == 0) && A[i]%2!=0) flag++;
        }
       
       if(flag==1 || A[i]==2) {
           count++;
       //printf("%d ",A[i]);
       }
       flag=0;
}
    printf("%d\n",count);
    return 0;
}
