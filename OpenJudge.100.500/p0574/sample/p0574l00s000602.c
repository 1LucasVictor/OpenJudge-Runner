#include <stdio.h>

int main(){
char S[5], tmp;

scanf("%s", S);

tmp = S[0];
for(int i = 1; i < 4; i++){
    if(S[i] == tmp){
        printf("Bad\n");
        return 0;
    }
    else
        tmp = S[i];
}
printf("Good\n");

return 0;
}