#include <stdio.h>
int main(){
  int i,a;
  scanf("%d",&a);
  for(i=1;i<=9;i++){
    if(a%i==0){
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}