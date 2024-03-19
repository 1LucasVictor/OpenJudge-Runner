#include <stdio.h>
#include <string.h>
#define rep(t,s) for (t=0;t<s;t++)

int main(void){
  int i,len1,len2;
  char str1[10];
  char str2[11];

  scanf("%10s\n%11s",str1,str2);

  len1 = strlen(str1);
  len2 = strlen(str2);

  rep(i,len1){
    if(str1[i] != str2[i])
      break;
    }

  if(i == len1 && len1+1 == len2){
    printf("Yes");
  }else{
    printf("No\n");
  }
  return 0;
}