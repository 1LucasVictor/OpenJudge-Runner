#include <stdio.h>
#include <stdlib.h>

#define N 200

int main(){
  char c[N];
  int s[N],top=0,a,b;

  while(scanf("%s",c)!=EOF){
    if(c[0]=='+'){
      top=top-1;
      a=s[top+1];
      top=top-1;
      b=s[top+1];
      top++;
      s[top]=a+b;
    }

    else if(c[0]=='-'){
      top=top-1;
      a=s[top+1];
      top=top-1;
      b=s[top+1];
      top++;
      s[top]=b-a;
    }

    else if(c[0]=='*'){
      top=top-1;
      a=s[top+1];
      top=top-1;
      b=s[top+1];
      top++;
      s[top]=a*b;
    }

    else{
      a=atoi(c);
      top++;
      s[top]=a;
    }

  }

  printf("%d\n",s[top]);
  return 0;
}

