#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int a,b;
    int answer=0;
    char op[2];
    
    while(1){
        scanf("%d %c %d",&a,op,&b);

        if(strcmp(op,"+")==0){
            answer = a + b;
        }else if(strcmp(op,"-")==0){
            answer = a - b;
        }else if(strcmp(op,"*")==0){
            answer = a * b;
        }else if(strcmp(op,"/")==0){
            answer = a / b;
        }else if(strcmp(op,"?")==0){
            break;
        }
        
        printf("%d\n",answer);

    }

    return 0;
}

