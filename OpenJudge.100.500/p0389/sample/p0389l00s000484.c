#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[201];
    char z[201];
    int m;
    int h[201] = {0};
    int length;

    while (1){

        scanf("%s", s);
        length = strlen(s);

        if( s[0] == '-'){
            break;
        }
        
        scanf("%d", &m);

        for(int i = 0; i < m; i++){
            scanf("%d",&h[i]);

            strncpy(z, s, h[i]);
            z[h[i]] = '\0';
            strcpy(s, s+h[i]);
            strcat(s, z);
        }
        printf("%s\n", s);
        
    }
    return (0);
}


