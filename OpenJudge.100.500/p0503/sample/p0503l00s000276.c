#include <stdio.h>
#include <string.h>
 
int main(void){
  int n;
  scanf("%d",&n);
  int i,j;
  int a[n];
  /*for(i=0;i<n;i++){
  	scanf("%d ",&a[i]);
  }*/
  for(i=0;i<n;i++){
    scanf("%d ",&a[i]);
    for(j=0;j<i;j++){
    	if(a[j]==a[i]){
          printf("NO\n");
          return 0;
        }
    }
  }
  printf("YES\n");
  return 0;
}