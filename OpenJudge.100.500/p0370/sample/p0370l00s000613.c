#include<stdio.h>

int main(){
    int a,b;
    char op;
    int x;
    
    while(1){
        scanf("%d %c %d\n",&a,&op,&b);
        if(op == '?'){
            break;
        }else if(op == '+'){
            x = a + b;
        }else if(op == '-'){
            x = a-b;
        }else if(op == '*'){
            x = a*b;
        }else if(op == '/'){
            x = a/b;
        }
        printf("%d\n",x);
    }
    return 0;
}
