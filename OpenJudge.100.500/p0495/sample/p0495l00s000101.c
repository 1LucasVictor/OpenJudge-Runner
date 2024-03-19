#include<stdio.h>
#include<string.h>

int main(){

    char s[3+1];

    scanf("%s", s);

    if(strcmp(s,"AAA") == 0 || strcmp(s,"BBB") == 0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

    return 0;
}
        

