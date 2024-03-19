#include <stdio.h>
int main(void){
    int a,b,result;
    char op;
    while(1){
        scanf( "%d %c %d" , &a , &op, &b );        
        if( op == '?' ){ break; }
        switch( op ){
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = a / b; break;
        }
        printf( "%d\n" , result );
    }
}

