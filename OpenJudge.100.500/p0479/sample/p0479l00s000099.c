#include<stdio.h>
int main(void){
int n;
  scanf("%d",&n);
  int a[n];
  for(int i=1;i<n;i++){
    scanf("%d",&a[i]);
  }
  int list[n];
  for(int i=0;i<n;i++){
    list[i]=0;
  }
  for(int i=1;i<n;i++){
    list[a[i]-1]++;
  }
  for(int i=0;i<n;i++){
    printf("%d\n",list[i]);
  }
  return 0;
}