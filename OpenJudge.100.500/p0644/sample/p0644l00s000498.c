#include <stdio.h>
int main(){
  int a;
  int b=0;
  char s[3];
  scanf("%s",&s);
  
  for(a=0;a<=3;a=a+1){
    if(s[a]=='1'){
      b=b+1;
    }
    
    else{
      b=b;
    }
  }
  printf("%d\n",b);
  return 0;
}