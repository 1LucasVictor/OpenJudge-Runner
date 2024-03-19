#include<stdio.h>
int main(){
  int n,a,b,c,d;
  char s[200020];
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf("%s",s);

  int i,judge=0;
  for(i=1;i<n;i++){
    if(s[i-1]==s[i] && s[i]==s[i+1] && s[i]=='.' && i<n-1)
      judge = 1;
    if(s[i-1]==s[i] && s[i-1]=='#'){
      printf("No\n");
      return 0;
    }
  }

  if(c < d){
    printf("Yes\n");
    return 0;
  }else{
    if(judge==1){
      printf("Yes\n");
      return 0;
    }else{
      printf("No\n");
      return 0;
    }
  }
  return 0;
}