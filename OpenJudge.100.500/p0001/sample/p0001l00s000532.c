#include <stdio.h>

int main(int argc,char* argv[]){
  
  int a,b;
  int count;
  int num;

  while(scanf("%d %d",&a,&b) != EOF){
    count = 1;
    num = 10;
    while(((a+b) / num) != 0){
      ++count;
      num *= 10;
    }

    printf("%d\n",count);
    
  }
  
  return 0;
  
}