#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    char op;
    
    while(1){
        scanf("%d%*c%c%d",&a,&op,&b);
        
        if(op!='?'){
            if(op=='+'){
                printf("%d\n",a+b);
            }else if(op=='-'){
                printf("%d\n",a-b);
            }else if(op=='*'){
                printf("%d\n",a*b);
            }else if(op=='/'){
                printf("%d\n",a/b);
            }
        }else{break;}
        
    }
    return 0;
}
