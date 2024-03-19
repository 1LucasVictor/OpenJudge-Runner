#include<stdio.h>

int main()
{
  int n,i,j,max,mini,a,b,count;

  scanf("%d",&n);
  int A[n];
  for(i=0; i<n; i++){
    scanf("%d",&A[i]);
  }
  mini = A[0];
  for(i=1; i<n-1; i++){
    a = A[i];
    if(a < mini){
      mini = a;
      count=i+1;
    }
  }
  max = A[count];
    for(j=count; j<n; j++){
      b = A[j];
      if(b > max){
	max = b;
      }
    }
  printf("%d\n",max-mini);
  return 0;
}

