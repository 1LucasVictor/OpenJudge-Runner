#include <stdio.h>
#include <string.h>
#define rep(t,s) for (t=0;t<s;t++)

int main(void){
  int i,len1,len2;
  char username[10];
  char new[11];

  scanf("%s\n",username);
  scanf("%s\n",new);

  len1 = strlen(username);
  len2 = strlen(new);

  rep(i,len1){
    if(username[i] != new[i])
      break;
    }

  if(i == len1 && len1+1 == len2){
    printf("Yes");
  }else{
    printf("No\n");
  }
  return 0;

}