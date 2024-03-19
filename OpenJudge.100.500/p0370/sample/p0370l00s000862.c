#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int a=0,b=0;
    int answer=0;
    char op[2];
    
    while(1){
        scanf("%d %c %d",&a,&op,&b);//読み込み
        
        if(strcmp(op,"+")==0){
            answer = a + b;//＋のとき和
        }else if(strcmp(op,"-")==0){
            answer = a - b;//ーのとき差
        }else if(strcmp(op,"*")==0){
            answer = a * b;//＊のとき積
        }else if(strcmp(op,"/")==0){
            answer = a / b;// /のとき商
        }else if(strcmp(op,"?")==0){
            break;
        }
        
        printf("%d\n",answer);

    }

    return 0;
}

