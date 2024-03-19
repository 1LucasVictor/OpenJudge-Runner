#include<stdio.h>
#include<string.h>
int main(){
  int i,j;
  char s[5],a;
  scanf("%s",s);
  for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
      if(s[i]<s[j])
        a=s[i];
        s[i]=s[j];
        s[j]=a;
    }
  }
  if(s[0]==s[1] && s[2]==s[3])
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
