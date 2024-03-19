#include <stdio.h>

int main(void)
{
    char S[5];
    int ok=0;
    scanf("%s",S);
    for(int i=0;S[i]!='\0';i++){
        int c=0;
        for(int j=i;S[j]!='\0';j++){
            if(S[i]==S[j])
                c++;
        }
        if(c==1)
            ok++;
    }
    if(ok==2)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
