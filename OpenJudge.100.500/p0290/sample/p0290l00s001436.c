#include <stdio.h>
int main(){
  int A[10000],i,yakusuu,count=0,a,j;

  scanf("%d",&i);
  for(a=0;a<i;a++) scanf("%d",&A[a]);

  for(a=0;A[a]<i+1;a++){
       yakusuu=0;
       for(j=1;j<=A[a];j++){
             if(A[a]%j==0) yakusuu++;
        }

       if(yakusuu==2) count++;
    }

  printf("%d\n",count);

  return 0;
}
