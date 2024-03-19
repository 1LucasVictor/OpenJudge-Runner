#include <stdio.h>
int main(void){
  int h,n,a[10000],sum=0;
  
  scanf("%d%d",&h,&n);
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  
  for(int i=0;i<n;i++){
      sum+=a[i];
      if(h<=sum){printf("Yes");return 0;}
  }
 printf("No");
  
  return 0;
}
