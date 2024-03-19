#include<stdio.h>
int main (void){
  int n;
  int i;


  scanf("%d",&n);
  int a[n];



  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }


  for(i=0;i<n;i++){
    if(i==n-1)
      printf("%d\n",a[n-i-1]);
    else
      printf("%d ",a[n-i-1]);
  }

  return 0;
}