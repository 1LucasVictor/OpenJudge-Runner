#include <stdio.h>
#include <ctype.h>

int main()
{
  int stack[100],top=0,n1,n2;
  char buf[1000000],*p;
  
  fgets(p=buf,400,stdin);
  while (*p >= ' ') {
    while (isspace(*p)) p++;
    if (isdigit(*p)) {
      n1=0;
      while (isdigit(*p))n1=(10*n1)+(*p++ & 0xf);
      stack[top++] = n1;
    } else {
      n1 = stack[--top];
      n2 = stack[--top];
      if     (*p=='+') n2=n2+n1;
      else if (*p=='-') n2=n2-n1;
      else if (*p=='*') n2=n2*n1;
      stack[top++]=n2;
      p=p+1;
    }
  }
  printf("%d",stack[--top]);
  printf("\n");
  return 0;
}

