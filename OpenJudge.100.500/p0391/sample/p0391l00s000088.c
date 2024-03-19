#include <stdio.h>
#include <string.h>

int main(void)
{
    int a,b;
    int q;
    char p[1000];
    char str[1001];
    char copy[1001];
    char n[1001];
    int length = 0;
    char str2[1001];

    scanf("%s", str);
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        scanf("%s", n);

        if (strcmp(n, "print") == 0){
            scanf("%d %d", &a,&b);
            for(int k = 0; k < (b - a) + 1; k++){
                str2[k] = str[a+k];
            }
            str2[b-a+1] = '\0';
            printf("%s\n", str2);
        }
        else if(strcmp(n, "reverse") == 0){
            scanf("%d %d", &a,&b);
            for(int j = 0; j < (b - a + 1) / 2; j++){
                int temp = str[a + j];
                str[a + j] = str[b - j];
                str[b - j] = temp;
            }
        }
        else if(strcmp(n, "replace") == 0){
            scanf("%d %d %s", &a, &b, p);
            for(int c = 0; c < (b - a) + 1; c++){
                str[a + c] = p[c];
            }
        }
    }
    return (0);
}

