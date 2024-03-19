#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    for(;;){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?'){
            break;
        }
        else if(op=='+'){
            c=a+b;
        }
        else if(op=='-'){
            c=a-b;
        }
        else if(op=='/'){
            c=a/b;
        }
        else if(op=='*'){
            c=a*b;
        }
        
    printf("%d\n",c);
    }
    return 0;
}