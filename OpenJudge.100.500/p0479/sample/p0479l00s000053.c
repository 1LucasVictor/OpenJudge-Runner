#include<stdio.h>
int main(void){
  int n;
  int m[200000]={0};
  int a[200000];
  
  scanf("%d",&n);
  for(int i=0;i<n-1;i++){
    scanf("%d",&a[i]);
    m[a[i]-1]++;
  }
  for(int j=0;j<n;j++){
    printf("%d\n",m[j]);
  }
  return 0;
}