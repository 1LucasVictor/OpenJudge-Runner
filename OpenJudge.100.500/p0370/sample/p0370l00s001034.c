#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    while(op!='?'){
        if(op=='+'){
            printf("%d\n",a+b);
            scanf("%d %c %d",&a,&op,&b);
        }else if(op=='-'){
            printf("%d\n",a-b);
            scanf("%d %c %d",&a,&op,&b);
        }else if(op=='*'){
            printf("%d\n",a*b);
            scanf("%d %c %d",&a,&op,&b);
        }else{
            printf("%d\n",a/b);
            scanf("%d %c %d",&a,&op,&b);
        }
    }
    return 0;
}

