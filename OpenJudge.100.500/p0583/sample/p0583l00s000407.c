#include<stdio.h>
int main(){
  int n,a,b,c,d;
  char s[200020];
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf("%s",s);

  int i,k;
  k = (c>d) ? c : d;
  for(i=a+1;i<k;i++){
    if(s[i-1]==s[i] && s[i-1]=='#'){
      printf("No\n");
      return 0;
    }
  }

  if(c < d){
    printf("Yes\n");
    return 0;
  }else{
    for(i=b-1;i<d;i++){
      if(s[i-1]==s[i] && s[i]== s[i+1] && s[i]=='.'){
        printf("Yes\n");
        return 0;
      }else{
        printf("No\n");
        return 0;
      }
    }

  }
  return 0;
}