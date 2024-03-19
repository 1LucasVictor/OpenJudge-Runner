#include<stdio.h>
#include<string.h>
int main(){
    char str[21];
    int len;
    scanf("%s",str);
    len=strlen(str);
    for (int i=0; i<(len/2); i++) {
        char c;
        c=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=c;
    }
    printf("%s\n",str);
    return 0;
}

