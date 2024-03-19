#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char str[1200];
     fgets(str, sizeof(str), stdin);
    for(i = 0; i <= strlen(str); i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
        else if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s", str);
    return 0;
}

