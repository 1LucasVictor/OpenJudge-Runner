#include <stdio.h>
int main(){
    int a,b,c,i;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='+'){
            printf("%d\n",a+b);
        }
        else if(op=='-'){
            printf("%d\n",a-b);
        }
        else if(op=='*'){
            printf("%d\n",a*b);
        }
        else if(op=='/'){
            printf("%d\n",a/b);
        }
        else if(op=='?'){
            break;
        }
        else{}
    }
    return 0;
    
}
