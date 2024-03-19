#include<stdio.h>
int main(){
  while(1){
    int a,b,ans;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    if ( c == '?') break;
    if ( c == '+'){
      ans=a+b;
    }
    if (c == '-'){
      ans=a-b;
    }
    if (c == '*'){
      ans=a*b;
    }
    if (c == '/'){
      ans=a/b;
    }
    printf("%d\n", ans);
  }
    return 0;
  }

