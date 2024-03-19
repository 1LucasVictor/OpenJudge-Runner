#include <stdio.h>

int main(void)
{
    char S[5];
    char C1,C2;

    scanf("%s",S);


    C1=S[0];

    if(C1 != S[1]){
        C2 = S[1];

        if(S[2] != S[3]){
            if(((S[2]==C1)&&(S[3]==C2))||(S[2]==C2)&&(S[3]==C1)){
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        } else {
            printf("No\n");
        }
    } else {
        if((S[2] == S[3]) && (S[2] != C1)){
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    
    return 0;
}