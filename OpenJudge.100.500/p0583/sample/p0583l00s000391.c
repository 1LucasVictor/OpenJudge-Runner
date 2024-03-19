#include<stdio.h>
int main(void)
{
  int n,a,b,c,d;
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  char s[2000010];
  scanf("%s",s);

  if(c<d){
    puts("Yes");
    return 0;
  }

  int start=b;
  while(start<c-3){
    if(s[start]=='.'&&s[start+1]=='.'&&s[start+2]=='.'){
      puts("Yes");
      return 0;
    }
    start++;
  }

  puts("No");
  return 0;
}
