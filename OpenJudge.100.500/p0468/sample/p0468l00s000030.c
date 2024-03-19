#include<stdio.h>
#include <string.h>
int main()
{
    int i,j,k;
    char s[10],m[10];
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]=='R'){
            m[i]='B';

        }
        else if(s[i]=='B'){
            m[i]='R';
        }
else{
    m[i]=s[i];
}
    }
    printf("%s",m);

    return 0;


}