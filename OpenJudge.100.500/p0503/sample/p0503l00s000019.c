#include <stdio.h>
 
int main(void){
  int n;
  scanf("%d",&n);
  int i,j;
  int a[n];

  for(i=0;i<n-1;i++){
   	scanf("%d ",&a[i]);
    for(j=i+1;j<n;j++){
    	if(a[j]==a[i]){
          printf("NO\n");
          return 0;
        }
    }
  }
  printf("YES\n");
  return 0;
}