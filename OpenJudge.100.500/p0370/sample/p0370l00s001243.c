#include <stdio.h>
#include <string.h>

int judge_operator(int a,char op,int b);

int main(){
    int a,b,output_value;
    char op;
    char finish_op;
    finish_op = '?';
    while(1){
        scanf("%d %c %d",&a,&op,&b);
            if(op == finish_op){
            break;
            }
        printf("%d\n",judge_operator(a,op,b));
    }
}

int judge_operator(int a,char op,int b){
    int calculation_result;
    switch(op){
        case '+':
            calculation_result = a + b;
            break;
        case '-':
            calculation_result = a - b;
            break;
        case '*':
            calculation_result = a * b;
            break;
        case '/':
            calculation_result = a / b;
            break;
        
    }
    return calculation_result; 
}
