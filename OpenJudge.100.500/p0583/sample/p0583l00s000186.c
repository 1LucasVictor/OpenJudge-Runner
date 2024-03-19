#include<stdio.h>
int main(){
  int n,a,b,c,d;
  char s[200020];
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf("%s",s);

  int i,k;
  if(c>d) k=c;
  else k=d;
  for(i=a;i<k-1;i++){
    if(s[i]==s[i+1] && s[i]=='#'){
      printf("No\n");
      return 0;
    }
  }

  if(c > d){
    for(i=b-1;i<d;i++){
      if(s[i-1]==s[i] && s[i]==s[i+1] && s[i]=='.'){
        printf("Yes\n");
        return 0;
      }
    }
    printf("No\n");
    return 0;
  }else
    printf("Yes\n");
  return 0;
}
