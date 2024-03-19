/* abc_167_a */

#include<stdio.h>
#include<string.h>

int main()
{
  char S[15],T[15];
  int i,a;
  scanf("%s",S);
  scanf("%s",T);
  a=1;
  for (i=1;i<strlen(S);i++){
    if (S[i]!=T[i]){
      a=0;
      break;
    }
  }
  if (a==1) printf("Yes\n");
  else printf("No\n");
  return 0;
}
