#include<stdio.h>
#include<string.h>
int main(){\
    int a, start, stop;
    char s[1001], command[101], replacement[1001], temp[1001];
    scanf("%s", s);
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", command);
        if(strcmp(command, "print") == 0){
            scanf("%d %d", &start, &stop);
            while(start <= stop){
                printf("%c", s[start]);
                start = start + 1;
            }
            printf("\n");
        }
        else if(strcmp(command, "reverse") == 0){
            scanf("%d %d", &start, &stop);
            strcpy(temp, s);
            for (int k = 0; k < stop - start + 1; k++)
            {
                s[start + k] = temp[stop - k];
            }
            
        }
        else if (strcmp(command, "replace") == 0){
            scanf("%d %d", &start, &stop);
            scanf("%s", replacement);
            int n = strlen(replacement);
            for (int j = 0; j < n; j++)
            {
                s[start] = replacement[j];
                start = start + 1;
            }
        }
    }
    return 0;
}
