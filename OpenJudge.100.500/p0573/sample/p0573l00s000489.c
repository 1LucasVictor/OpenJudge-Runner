#include<stdio.h>
int main(){
    char s[5];
    scanf("%s",s);
    int i,c[27]={0};
    for(i=0;i<4;i++) c[s[i]-'A']++;
    for(i=0;i<27;i++){
        if(c[i]==2||c[i]==0);
        else{
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}