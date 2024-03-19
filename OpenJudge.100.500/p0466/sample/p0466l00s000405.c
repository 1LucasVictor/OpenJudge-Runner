#include <stdio.h>
#include <string.h>
int main(){

    char s[12], t[12];
    scanf("%s", s);
    scanf("%s", t);


    int length = strlen(s), i;

    for (i=0; i<length; ++i){
        if(s[i]!=t[i]){
            printf("No");
            return 0;
        }
    }

    if(length+1==strlen(t)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
