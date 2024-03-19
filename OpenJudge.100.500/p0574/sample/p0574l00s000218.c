#include <stdio.h>

int main()
{
    int j=0;
    char s[4];
    scanf("%s",s);
    for(int i=0; i<3; ++i){
        if(s[i]==s[i+1]){
            j=1;
            break;
        }
    }
    if(j==0){
        printf("Good");
    }else{
        printf("Bad");
    }
    return 0;
}