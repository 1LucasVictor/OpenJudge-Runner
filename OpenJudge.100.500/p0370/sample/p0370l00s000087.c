#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int a=0,b=0;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op == '+'){
            printf("%d\n",a+b);
        }else if(op == '-'){
            printf("%d\n",a-b);
        }else if(op == '*'){
            printf("%d\n",a*b);
        }else if(op == '/'){
            printf("%d\n",a/b);
        }else if(op == '?'){
            break;
        }
    }
    return 0;
}