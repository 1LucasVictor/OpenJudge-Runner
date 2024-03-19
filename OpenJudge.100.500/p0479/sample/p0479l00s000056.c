#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  int a[n];
  int b[n+1];
  int i;
  
   for(i=0;i<n-1;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n+1;i++){
    b[i]=0;
  }
  
  for(i=0;i<n-1;i++){
    b[a[i]]=b[a[i]]+1;
  }
  for(i=1;i<n+1;i++){
    printf("%d\n",b[i]);
  }
  return 0;
}
