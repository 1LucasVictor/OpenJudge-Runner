#include<stdio.h>

int main(){
  int a, b, i, j;
  
  scanf("%d",&a);
  
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      b = i * j;
      if(a==b){
        printf("Yes");
        return 0;
      }
    }
  }
  
  printf("No");
  
  return 0;
}
    