#include <stdio.h>

int main(){
    char S[3];
    scanf("%s",S);

    int i,j=0;

    for(i=0;i<3;i++){
        if(S[i]=='A')j++;
    }

    if(j==3||j==0){printf("No");}
    else{printf("Yes");}

    return 0;
}