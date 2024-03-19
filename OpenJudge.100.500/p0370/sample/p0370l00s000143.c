#include <stdio.h>

int main(void){
    
    int a,b,kei;
    char op;

    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op == '?'){
            break;
        }
        if(op == '+'){
            kei = a+b;
            printf("%d\n",kei);
        }else if(op == '-'){
            kei=a-b;
            printf("%d\n",kei);
        }else if(op =='*'){
            kei=a*b;
            printf("%d\n",kei);
        }else if(op == '/'){
            kei=a/b;
            printf("%d\n",kei);
        }
    }
}
