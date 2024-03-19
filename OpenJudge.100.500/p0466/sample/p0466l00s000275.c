#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[256];
    char t[256];
    int i,j;

    scanf("%s",s);
    scanf("%s",t);

    for(i=0;s[i] != '\0';++i);
    for(j=0;t[j] != '\0';++j);

    if(i+1 == j){
        if(strncmp(s,t,i -1) == 0){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    } else{
        printf("No\n");
    }

    return 0;
}
