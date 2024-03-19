#include <stdio.h>

int main(void)
{
    int i, j;
    char s[4];
    char tmp1, tmp2;
    int c1, c2;
    c1 = c2 = 0;

    scanf("%s", s);

    tmp1 = s[0];
    tmp2 = '\0';

    for(i = 0 ; i < 4 ; i++){
        if(tmp1 == s[i]) c1++;
        else{ 
            tmp2 = s[i];
        for(j = i ; j < 4 ; j++){
            if(tmp2 == s[j])c2++;
            }
        }
    }
    //printf("%d %d", c1, c2);
    if(c1 == 2 && c2 == 3) printf("Yes\n");
    else printf("No\n");
}