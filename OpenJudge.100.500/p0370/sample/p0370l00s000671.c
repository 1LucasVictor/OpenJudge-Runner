#include<stdio.h>
int main(void){
    int a,b;
    char op;
    while(scanf("%d %c %d",&a,&op,&b)!=EOF){
        switch(op){
            case '?':{
            break;
            break;
            } 
            case '+':{
            printf("%d\n",a+b);
            break;
            }
            case '-':{
            printf("%d\n",a-b);
            break;
            }
            case '*':{
            printf("%d\n",a*b);
            break;
            }
            case '/':{
            printf("%d\n",a/b);
            break;
            }          
        }

    }
    return 0;
}
