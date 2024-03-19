#include<stdio.h>
int main(){
  int i,j,cnt=0;
  char s[4];
  scanf("%s",s);
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(i==j)
        continue;
      if(s[i]==s[j])
        cnt++;
    }
  }
  if(cnt==4){
    printf("Yes\n");
    return 0;
  }
  printf("No\n");
  return 0;
}