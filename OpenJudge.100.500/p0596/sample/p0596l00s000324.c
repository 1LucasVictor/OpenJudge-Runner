#include<stdio.h>
int check(char s[100000],int n){
  for(int i = 0;i < n - 1;i++){
    if(s[i] != s[i + 1]){
      return 1;
    }
  }
  return 0;
}

int main(){
  char s[100000];
  scanf("%s",&s);
  int n = strlen(s),ans = 0;
  while(check(s,n) > 0){
    for(int i = 0;i < n - 1;i++){
      if(s[i] != s[i + 1]){
        for(int j = i;j < n - 2;j++){
          s[j] = s[j + 2];
        }
        n -= 2;
        ans += 2;
      }
    }
  }
  printf("%d",ans);
  return 0;
}