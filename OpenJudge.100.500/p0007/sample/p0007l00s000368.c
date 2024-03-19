#include<stdio.h>
int main(void)
{
  int x, a=0, b=0, c=0, d=0, e=0;

  while(scanf("%d", &x)!=EOF)
    {
      for (a=0;a<=x && a<=9;a++){
        for (b=0;a+b<=x && b<=9;b++){
          for (c=0;a+b+c<=x && c<=9;c++){
            for (d=0;a+b+c+d<=x && d<=9;d++){
              if(a+b+c+d==x)e+=1;}}}}
            printf("%d\n", e);
            e=0;
    }
  return 0;

}