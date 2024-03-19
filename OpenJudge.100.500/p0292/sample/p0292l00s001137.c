#include<stdio.h>
int main(){
  int temp,n,i,j,a[101],count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	count++;
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  printf("%d\n",count);
  return 0;
}