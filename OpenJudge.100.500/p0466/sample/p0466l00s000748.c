#include<stdio.h>
#include<string.h>
int main(){
  int i, j, n, m, flag=0;
  char s[11], t[12];
  scanf("%s", s);
  scanf("%s", t);
  n = strlen(s);
  m = strlen(t);
  for(i=0; i<n; i++){
    if(s[i]!=t[i]){
      flag = 1;
    }
  }
  if(m-n!=1){
    flag = 1;
  }
  if(flag==0){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}