#include<stdio.h>
#include<string.h>

int main()
{
    char str[1201];
    char c;
    int i;
    fgets(str,1200,stdin);
    for(i=0;i<strlen(str);i++){
        c=str[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            c=c^0x20;
        }
        printf("%c",c);
    }
    return 0;
}
