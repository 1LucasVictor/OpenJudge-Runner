#include <stdio.h>
int main(void){
  int n,i,a[10000],b[10000]={0};
  scanf("%d",&n);
  for(i=0; i<n-1; i++){
    scanf("%d",&a[i]);
    b[a[i]] += 1; 
  }
  for(i=1; i<n+1; i++)
    printf("%d\n",b[i]);
  return 0;
}