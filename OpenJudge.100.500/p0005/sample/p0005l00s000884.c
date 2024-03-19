#include<stdio.h>
#include<string.h>
int main(){
  char z[21];
  int i,j;
  scanf("%s",z);
  int n = strlen(z);
  if(n<=20){
    for(j=n;j>0;j--){
      printf("%c",z[j-1]);
    }
    printf("\n");
  }
  return 0;
}