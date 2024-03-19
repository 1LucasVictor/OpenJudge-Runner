#include<stdio.h>

int main(){
  int a,A;
  A=0;
  char s[5];
  scanf("%s", s);
  int i;
  for(i=0;i<3;i++){
    if(s[i]=='1'){
     A++; 
    }
  }
  printf("%d\n",A);
  return 0;
}