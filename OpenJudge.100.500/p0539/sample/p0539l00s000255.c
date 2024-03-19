#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=9;i++){
     for(int j=1;j<=9;j++){
       if(n==i*j){
         printf("Yes\n");
         return 0;
       }
  	}
  }
  printf("No\n");
  return 0;
}