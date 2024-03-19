#include <stdio.h>

  int main(){

    int a,b;
    char op;
    int ans;

      while(1){
        scanf("%d %c %d",&a,&op,&b);

        if(op == '+'){
          ans = a+b;
        }
        else if(op == '-')ans = a - b;
        else if(op == '*')ans = a*b;
        else if(op == '/')ans = a/b;
        else break;

        printf("%d\n",ans);
    }
  }

