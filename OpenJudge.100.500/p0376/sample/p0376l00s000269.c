#include<stdio.h>
int main(){
  int a[100],temp,i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(j>i){
	temp=a[j];
	a[j]=a[j-1];
	a[j-1]=temp;
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d",a[i]);
    if(i!=n-1){
      printf(" ");
    }
  }
  printf("\n");
  return (0);
}