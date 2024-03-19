#include<stdio.h>
#include<string.h>
int main(){
  char *N;
  scanf("%s", N);
  if(N[0]=='7'||N[1]=='7'||N[2]=='7'){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}