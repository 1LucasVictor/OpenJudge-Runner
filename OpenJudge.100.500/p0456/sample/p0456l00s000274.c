#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    char t[1000];
  
    scanf("%s", s);
    scanf("%s", t);

    int count = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != t[i])
        { 
            count++;
        }
    }
    printf("%d", count);
    return 0;
}