#include<stdio.h>
int main(){
    char s[200001], t[200001];
    scanf("%s", s);
    scanf("%s", t);
    long int i, cnt=0;
    for(i=0; i<strlen(s); i++){
        if(s[i] != t[i]) cnt++;
    }
    printf("%ld", cnt);
    return 0;
}