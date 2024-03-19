#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  int num, req, mul;
  int i;
  if(argc < 2)
    fprintf(stderr, "invalid inputs");
  
  scanf("%d%d", &num, &req);
  
  if(num < 2 && num > 20)
    fprintf(stderr, "error");
  if(req < 1 && req > 20)
    fprintf(stderr, "error");
  
  for(i = 1;;i++){
      mul = num * i - (i - 1);
    
    if(mul >= req){
      printf("%d\n", i);
      return 0;
    }else{
      continue;
    }
  }
}
