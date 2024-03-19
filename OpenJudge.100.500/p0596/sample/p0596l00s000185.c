#include <stdio.h>

int main()
{
    int b = 0, w = 0, ans;
    char read = '\0';
    while(read != '\n'){
        scanf("%c", &read);
        if(read == '0') b++;
        else if(read == '1') w++;
    }
    if(b < w) printf("%d\n", b*2);
    else printf("%d\n", w*2);

    return 0;
}