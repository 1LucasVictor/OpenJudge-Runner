#include<stdio.h>

int main(){
  char a[200001] = {0};
  char b[200001] = {0};
  
  scanf("%s",&a);
  scanf("%s",&b);
  
  int i = 0;
  int count = 0;
  for(i = 0; i < 200001;i++){
    if(a[i] != b[i])
      count++;
  }
  printf("%d",count);
  
 return 0;
}