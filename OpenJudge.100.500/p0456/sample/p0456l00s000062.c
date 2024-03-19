#include<stdio.h>
#define N 200000

int main()
{
  char s[N],t[N];

  scanf("%s",s);
  scanf("%s",t);

  int count=0;
  for(int i=0;i<N;i++){
    if(s[i] != t[i]) count++;

    if(s[i] == 0) break;
  }

  printf("%d\n",count);

  return 0;
}
