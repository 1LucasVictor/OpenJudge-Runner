#include <stdio.h>
int main(void){
    int a,b,x;
    char op;
    
    while(scanf("%d %c %d ",&a,&op,&b) !=EOF){
        if(op =='+'){
        x =a+b;
        
        printf("%d\n",x);}
        
        else if(op == '-'){
        x =a-b;
        
        printf("%d\n",x);}
        
        else if(op == '*'){
        x =a*b;
        
        printf("%d\n",x);}
        
         else if(op == '/'){
        x=a/b;
        
        printf("%d\n",x);}
        
        else if(op == '?'){
        
        break;}
    }// Your code here!
    return(0);
}

