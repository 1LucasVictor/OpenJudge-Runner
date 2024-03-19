#include<stdio.h>
int main(){
    char s[5];
    scanf("%s",s);
    int counr=0;
    for(int i=0;i<3;i++){
        if(s[i]==s[i+1])
            counr++;
    }
    if(counr==0)
        puts("Good");
    else
        puts("Bad");
    return 0;
}