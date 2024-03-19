#include <stdio.h>
#include <stdlib.h>

int main(){
    char *op;
    int Ans[1000];
    int i=0;
    
    while(scanf("%c",op),*op!='\n'){
        
        if(*op=='+'){
            Ans[i-2]=Ans[i-2]+Ans[i-1];
            i--;
            continue;
        }else if(*op=='-'){
            Ans[i-2]=Ans[i-2]-Ans[i-1];
            i--;
            continue;
        }else if(*op=='*'){
            Ans[i-2]=Ans[i-2]*Ans[i-1];
            i--;
            continue;
        }else if(*op!=' '){
            Ans[i]=atoi(op);
            while(1){
                scanf("%c",op);
                if(*op==' '){
                    i++;
                    break;
                }
                Ans[i]=Ans[i]*10+atoi(op);
            }
        }
    }
    
    printf("%d\n",Ans[0]);
    return 0;
    
}