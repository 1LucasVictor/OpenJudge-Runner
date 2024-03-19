#include<stdio.h>
#include<string.h>

int main(){
  char s[10], t[11];
  int tn, sn;

  scanf("%s", s);
  scanf("%s", t);

  if(strlen(s) != (strlen(t)-1)){
    printf("No1\n");
    return 0;
  }else if(strstr(t, s) == NULL){
    printf("NO2\n");
    return 0;
  }else{
    printf("Yes\n");
  }

  return 0;
}
