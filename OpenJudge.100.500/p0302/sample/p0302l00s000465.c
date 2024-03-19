#include <stdio.h>
#include <string.h>

int main(){
  long long n, i;
  char in[16], op[16], str[100000];
  scanf("%lld", &n);
  while(n--){
    scanf("%s %s", op, in);
    if(op[0] == 'i'){
      strcat(str, in);
      strcat(str, ",");
    }else{
      strcat(in, ",");
      if(strstr(str, in) != NULL) puts("yes");
      else puts("no");
    }
  }
  return 0;
}