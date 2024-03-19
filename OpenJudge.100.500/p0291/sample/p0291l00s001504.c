#include <stdio.h>
int main(){
  int A[20000],j,i,max=0,min,a;

  scanf("%d",&a);
  for(i=0;i<a;i++)
    scanf("%d",&A[i]);

  min=A[0];

  for(i=1;i<a;i++){
     if(A[i]-min>max)    max=A[i]-min;
     if(A[i]<min)        min=A[i];
   }

  printf("%d\n",max);

  return 0;
}
