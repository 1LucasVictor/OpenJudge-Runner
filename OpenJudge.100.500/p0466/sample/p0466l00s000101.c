#include<stdio.h>
#include<string.h>
int main(void){
  int i;
  char a[50],b[20];
  scanf("%s %s", a, b);
  for( i=0; i<strlen(a); i++){
    if(a[i]!=b[i]){
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}