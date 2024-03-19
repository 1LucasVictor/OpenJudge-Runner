#include <stdio.h>
int main(void){
    int a,b,i;
    char op;

    for(i=a;;i++){
    scanf("%d %c %d",&a,&op,&b);

    if(op == '+'){
        printf("%d\n",a+b);
    }else if(op == '-'){
        printf("%d\n",a-b);
    }else if(op == '/'){
        printf("%d\n",a/b);
    }else if(op == '*'){
        printf("%d\n",a*b);
    }else if(op == '?'){
        break;
    }else{
        printf("該当なし\n");
    }
    if(a == 0 && b == 0 ){
        break;
    }
    }
}

