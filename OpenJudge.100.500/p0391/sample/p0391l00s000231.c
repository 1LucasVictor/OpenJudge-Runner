#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000];
    char temp[1000];
    
    int q;
    int a, b;
    char command[100];
    char * point = &command[0];
    char command1[] = "replace";
    char command2[] = "reverse";
    char command3[] = "print";
    int i, j, k, length;

    scanf("%s", str);
    scanf("%d", &q);

    length = strlen(str);

    for (i = 0; i < q; i++){
        scanf(" %s", command);
        if (strcmp(point, command1) == 0){
            scanf(" %d %d %s", &a, &b, temp);
            k = 0;

            for (j = a; j <= b; j++){
                str[j] = temp[k];
                k++;
            }
        }
        else if (strcmp(point, command2) == 0){
            scanf (" %d %d", &a, &b);
            k = 0;

            for (j = a; j <= b; j++){
                temp[k] = str[j];
                k++;
            }
            k--;
    
            for (j = a; j <= b; j++){
                str[j] = temp[k];
                k--;
            }
        }
        else if (strcmp(point, command3) == 0){
            scanf(" %d %d", &a, &b);

            for (j = a; j <= b; j++){
                printf("%c", str[j]);
            }
            putchar('\n');
        }
    }

    return 0;
}
