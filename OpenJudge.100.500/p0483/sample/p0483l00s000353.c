#include <stdio.h>

int main(void)
{
    char n[4];
    scanf("%s",&n);

    if(n[0]=='7'){
        printf("Yes");
    }else if(n[1]=='7'){
        printf("Yes");
    }else if(n[2]=='7'){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}