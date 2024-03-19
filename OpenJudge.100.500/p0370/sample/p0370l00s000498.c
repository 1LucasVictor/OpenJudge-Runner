#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y;
    char op;
    while(1){
    scanf("%d %c %d",&x,&op,&y);
        if(op=='+'){
            printf("%d\n",x+y);
        }else  if(op=='-'){
            printf("%d\n",x-y);
        }else  if(op=='*'){
            printf("%d\n",x*y);
        }else  if(op=='/'){
            printf("%d\n",x/y);
        }else{
            break;
        }
    }

    return 0;
}

