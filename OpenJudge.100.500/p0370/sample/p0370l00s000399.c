#include<stdio.h>
int main(void){
    int a, b, ans;
    char op;
    while(1){
        scanf("%d %c %d\n", &a, &op, &b);
        if(op == '?'){
            break;
        }else if(op == '+'){
            ans = a + b;
        }else if(op == '-'){
            ans = a - b;
        }else if(op == '*'){
            ans = a * b;
        }else if(op == '/'){
            ans = a / b;
        }
        printf("%d\n", ans);
    }
    // while(scanf("%d %c %d\n", &a, &op, &b), op != '?'){
    //     if(op == '+'){
    //         ans = a + b;
    //     }else if(op == '-'){
    //         ans = a - b;
    //     }else if(op == '*'){
    //         ans = a * b;
    //     }else(op == '/'){
    //         ans = a / b;
    //     }
    //     printf("%d\n", ans);
    // }
}
