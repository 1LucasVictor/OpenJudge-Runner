#include<stdio.h>
int main(){
    char S[4];
    scanf("%s",S);
    if(S[0]==S[1]&&S[2]==S[3]&&S[0]!=S[2]){
        printf("Yes\n");
    }
    else if(S[0]==S[2]&&S[1]==S[3]&&S[1]!=S[0]){
        printf("Yes\n");
    }
    else if(S[0]==S[3]){
        if(S[1]==S[2]&&S[0]!=S[1])
        printf("Yes\n");
    }
    else if(S[1]==S[2]&&S[3]==S[0]&&S[1]!=S[0]){
        printf("Yes\n");
    }
    else if(S[1]==S[3]&&S[0]==S[2]&&S[1]!=S[0]){
        
        printf("Yes\n");
    }
    else if(S[2]==S[3]&&S[1]==S[0]&&S[2]!=S[0]){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}