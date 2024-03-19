#include <stdio.h>
 
int main(void){
  int n;
  int s[200000];
  int f=0;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    scanf("%d",&s[i]);
    for(int j=i-1; j>=0; j--){
      if(s[j]==s[i]){
        f=1;
        break;
      }
    } 
  }
 
  if(f==0){
    printf("YES");
  }else{
    printf("NO");
  }
}