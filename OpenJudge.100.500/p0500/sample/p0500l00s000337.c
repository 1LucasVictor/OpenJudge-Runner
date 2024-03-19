#include<stdio.h>
int main(){
  int n,m,a;
  char c[6]={};
  char b;

  scanf("%d%d",&n,&m);
  for (int i = 0; i < m; i++)
  {
    scanf("%d %c", &a,&b);
    if(n != 1 && a == 1 && b=='0' )
    {
      printf("-1\n");
      return 0;
    }
    if(c[a-1] == 0 )
      c[a-1]=b;
    else if( c[a-1] != b )
    {
      printf("-1\n");
      return 0;
    }
  }
  for (int i = 0; i < m; i++)
    if (i==0 && c[0]== 0)
      c[1]='1';
    else if (c[i]==0)
      c[i]='0';    

  printf("%s\n", c);
  return 0;
}
