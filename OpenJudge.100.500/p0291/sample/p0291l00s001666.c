#include <stdio.h>
int main(){
  int A[20000],j,i,max=0,min=10000000,a,b;

  scanf("%d",&a);
  for(i=0;i<a;i++)
    scanf("%d",&A[i]);


  for(i=a-1;i>0;i--)
    if(A[i]>max)
      {
          b=i;
          max=A[i];
      }
      
  for(j=0;j<b;j++)
    if(A[j]<min) min=A[j];

  printf("%d\n",max-min);

  return 0;
}
