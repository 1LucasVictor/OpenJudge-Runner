#include <stdio.h>
int main(void){
    // Your code here!
    char moji[4];
    int flag = 0;
    for(int i=0;4>=i;i++){
        scanf("%c\n",&moji[i]);
    }
    if(moji[0]==moji[1]){
        if(moji[0]!=moji[2]&&moji[2]==moji[3]){
            printf("Yes\n");
            flag=1;
        }
    }
    else if(moji[0]==moji[2]){
        if(moji[0]!=moji[1]&&moji[1]==moji[3]){
            printf("Yes\n");
            flag=1;
        }
    }
    else if(moji[0]==moji[3]){
        if(moji[0]!=moji[1]&&moji[1]==moji[2]){
            printf("Yes\n");
            flag=1;
        }
    }
    
    if(flag==0){
        printf("No\n");
    }
}


