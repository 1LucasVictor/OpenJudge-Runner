#include <stdio.h>
int main(void){
    // Your code here!
    char S[5];
    int flag = 0;
    
    scanf("%s",S);
    for(int i = 0; i < 3 && flag == 0; i++)
    {
        if(S[i] == S[i+1])
        {
            //printf("%c %c\n",S[i],S[i+1]);
            flag = 1;
        }
    }
    
    printf("%s\n", (flag == 1)? "Bad":"Good");
}
