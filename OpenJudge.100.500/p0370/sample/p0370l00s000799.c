#include <stdio.h>
 
int main(void)
{   int a,b;
    char o;
    for(int i=1;i>0;i++){
        scanf("%d %c %d",&a,&o,&b);
        if(o=='+')
        {
            printf("%d\n",a+b);
        }
        else if(o=='-')
        {
            printf("%d\n",a-b);
        }
        else if(o=='*')
        {
            printf("%d\n",a*b);
        }
        else if(o=='/')
        {
            printf("%d\n",a/b);
        }
        else if(o=='?') 
        {
            break;
        }
    }
    return 0;
}
