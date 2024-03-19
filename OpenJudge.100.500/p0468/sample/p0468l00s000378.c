#include<stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[10];
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]=='R'){
            s[i]='B';

        }
        else if(s[i]=='B'){
            s[i]='R';
        }

    }
    printf("%s\n",s);

    return 0;


}