#include<stdio.h>

#define N 200000

int main(void)
{
  char s[N],t[N];

  scanf("%s",s);
  scanf("%s",t);

  int i=0;
  int count=0;
  do{
    if(s[i]==t[i]){
      i++;
    }
    else{
      count++;
      i++;
    }
  }while(s[i] != 0);

  printf("%d\n",count);

  return 0;
}
