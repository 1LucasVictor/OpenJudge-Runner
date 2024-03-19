#include<stdio.h>
#include<string.h>
int main(){
  int i,j,cnt=0;
  char s[3];
  scanf("%s",s);
  for(i=0; i<2; i++){
    j=i+1;
    if(s[i]!=s[j]){
      cnt++;
    }
  }
  if(cnt!=0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}