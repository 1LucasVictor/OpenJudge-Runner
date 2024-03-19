#include<stdio.h>

int main(){
  char c1[12];
  char c2[12];
  scanf("%s%s",c1,c2);
  for(int i = 0; i < 12; ++i){
    if(c1[i] == '\0') break;
    if(c1[i] != c2[i]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
}