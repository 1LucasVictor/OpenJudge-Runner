#include<stdio.h>

int main()
{
  int n,i,j,max,mini,A[200000],res,res1;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&A[i]);
  }
  res = A[1] - A[0];
  for(i=0; i<n-1; i++){   
    for(j=i+1; j<n; j++){
      res1 =A[j]- A[i]; 
      if(res < res1) res = res1;
    }
  }
  printf("%d\n",res);
  return 0;
}

