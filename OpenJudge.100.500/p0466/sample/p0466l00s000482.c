#include <stdio.h>
#include <string.h>

int main()
{
    char s[11], t[12];
    int count = 0;
    int a, i;
    scanf("%s", s);
    scanf("%s", t);
    
    a = strlen(s);
    
    for(i = 0; i < a; i++){
        if(s[i] == t[i]){
            count += 1;
        }
    }
    
    
    
    if(count == a)
        printf("Yes\n");
    else
        printf("No\n");
    
   
    return 0;
}