#include <stdio.h>
int main(void){
  int n;
  int a[2000];
  int num;
  int i,j;
  int b[2000];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    a[i]=0;
    b[i]=0;
  }
  
  for(i=1;i<n;i++){
    scanf("%d",&a[i]);
    b[a[i]-1]++;
  }
  
  
  
  for(i=0;i<n;i++)
    printf("%d\n",b[i]);
    
  return 0;
}
  