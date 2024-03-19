#include<stdio.h>
#include<string.h>

int N = 200000;
int main(void){
    char s[N], t[N];
    int i=0, x=0;

    scanf("%s%s",s ,t);

    while(s[i] != '\0'){
        if(t[i] != s[i]){
            x++;
        }
        i++;
    }
    printf("%d\n", x);
    return 0;
}