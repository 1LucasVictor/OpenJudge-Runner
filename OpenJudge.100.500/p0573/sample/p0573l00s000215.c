#include <stdio.h>
int main(){
  char s,y,r,m;
  if(scanf("%c%c%c%c",&s,&y,&r,&m));
  if(s==y&&r==m||s==r&&y==m||s==m&&y==r)
    printf("Yes");
  else
    printf("No");
}
