#include<stdio.h>
# define N 10000
int main()
{
    int n,A[N],i,j,count=0,flag;
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }

    
   for(i=0;i<n;i++){
       flag=0;
        for(j=2;j<=A[i];j++){
            if(A[i] % j == 0){
                flag++;
            }
        }
        if(flag==1) count++;
       
}
    printf("%d\n",count);
    return 0;
}
