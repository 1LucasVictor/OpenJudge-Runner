#include <stdio.h>
#include <string.h>
int main(){
  long cal=0;
  char s[100000];
  scanf("%s",&s);
  for (long i=0;i<strlen(s);i++){
    if (s[i]=='0'){
      cal++;
    }
    else {
      cal--;
    }
  }
  if (cal<0){
      cal+=strlen(s);
  }
  else{
      cal=strlen(s)-cal;
  }  
  printf("%ld\n",cal);
  return 0;
}