#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  char tmp;
  int wcount,i;

  scanf("%s",&str);

  wcount=(strlen(str)-1);

  for(i=0;i<wcount;i++){
    tmp=str[wcount];
    str[wcount]=str[i];
    str[i]=tmp;
    wcount--;
  }

  printf("%s\n",str);

  return 0;
}