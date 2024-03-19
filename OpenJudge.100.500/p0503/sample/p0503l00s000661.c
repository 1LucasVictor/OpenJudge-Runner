#include <stdio.h>
 
int main(void){
  int i,j,n;
  long a[200000];
  
  scanf("%d", &n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(a[i]==a[j]){
        printf("NO");
        return 0;
      }
    }
  }
  
  printf("YES");
  return 0;
}