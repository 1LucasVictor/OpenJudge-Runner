#include<stdio.h>
int main(void){
  int i;
  int left,light,mid;
  int c=0;
  int N1,N2;
  int A[10000];
  int B[500];

  scanf("%d",&N1);
  for(i=0;i<N1;i++){
    scanf("%d",&A[i]);
  }

  scanf("%d",&N2);
  for(i=0;i<N2;i++){
    scanf("%d",&B[i]);
  }

  for(i=0;i<N2;i++){
    left=0;
    light=N1;
    while(1){
      mid=(left+light)/2;
      if(A[mid]<B[i])left=mid+1;
      else if(A[mid]>B[i])light=mid;
      else{
	c++;
	break;
      }
      if(A[i]>A[i+1]){
	i=N2;
	break;
      }
    }
  }
  printf("%d\n",c);
}