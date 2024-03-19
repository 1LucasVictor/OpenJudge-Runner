#include <stdio.h>
int main(void){
  int n;
  int a[20000];
  int num;
  int i,j;
  float b[20000];
  
  scanf("%d",&n);
  for(i=1;i<n;i++)
    scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
    b[i]=0;
  
  for(j=0;j<n;j++){
    for(i=1;i<n;i++){
      if(a[i]==(j+1))
        b[j]++;
    }
  }
  
  for(i=0;i<n;i++)
    printf("%.0f\n",b[i]);
    
  return 0;
}
  