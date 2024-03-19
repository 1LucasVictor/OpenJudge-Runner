#include<stdio.h>
int main(){
    char s[3];
    int i;
    scanf("%s", s);
    for (int i = 0; i < 3; ++i)
    {
    if(s[i]=='7'){
        printf("Yes");
        return 0;
        }
    }
    printf("No");
    return 0;
}
