#include <stdio.h>
  
int main()
{   int x,y,i;
    char op;
    for(i=1;i>0;i++){
        scanf("%d %c %d",&x,&op,&y);
        if(op=='+')
        {printf("%d\n",x+y);
        }
        else if(op=='-')
        {printf("%d\n",x-y);
        }
        else if(op=='*')
        {printf("%d\n",x*y);
        }
        else if(op=='/'){
            printf("%d\n",x/y);
        }else if(op=='?') {
            break;
        }
    }
    return 0;
}
