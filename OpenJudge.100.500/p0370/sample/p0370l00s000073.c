#include <stdio.h>

int main(void){
    int a, b;
    char op;
    int ans;

    int i = 0;
for (; i<20000; i++){
    scanf("%d %c %d", &a, &op, &b);
    
    
    if(op == '+'){
        ans = a +b;
    }
    else if (op == '-'){
        ans = a -b;
    }
    else if (op == '*'){
        ans = a * b;
    }
    else if (op == '/'){
        ans = a / b;
    }
    else if (op == '?'){
        break;
    }
   

    printf("%d\n",ans);
}
    
    return 0;
}
