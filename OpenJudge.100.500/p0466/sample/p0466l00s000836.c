#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    static char S[10];
    static char T[11];
    int count=0;

    scanf("%[^\n]%*c",S);
    scanf("\n");
    scanf("%[^\n]%*c",T);

    for(int i=0;S[i]!='\0';i++){
       if(S[i]==T[i]){
        count=count+1;
       }
    }
    if(count==strlen(S)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
