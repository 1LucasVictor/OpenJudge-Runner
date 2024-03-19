#include<stdio.h>
#include<string.h>

int main(){
  char s[10], t[11];
  int tn, sn;

  scanf("%s", s);
  scanf("%s", t);

  /*tn = strlen(t);
  sn = strlen(s);
  printf("%d, %d", tn, sn);*/
  if(strlen(s)<1||strlen(s)>10){
    printf("No\n");
    return 0;
  }

  if(strlen(s) != (strlen(t)-1)){
    printf("No\n");
    return 0;
  }else if(strstr(t, s) == NULL){
    printf("No\n");
    return 0;
  }else if(s[0] != t[0]){
    printf("No\n");
    return 0;
  }else{
    printf("Yes\n");
  }

  return 0;
}
