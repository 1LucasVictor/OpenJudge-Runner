#include<stdio.h>
int main(){
  int n;
  int i;
  int j=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int x,y;
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  for(i=1;i<n;i++){
    x=a[i];
    j=i-1;
    while(j>=0 && a[j]>x){
      a[j+1]=a[j];
      j--;
      a[j+1]=x;
    }
    for(y=0;y<n;y++)printf("%d ",a[y]);
    printf("\n");
  }
  return 0;
}

