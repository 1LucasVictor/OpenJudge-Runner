#include <stdio.h>
#include <string.h>

int main(){
    char* N;
    scanf("%s", N);
    int flag =0;
    for(int i =0; i < strlen(N); i++){
        if (N[i] == '7') flag=1;
    }
    if (flag){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}