#include <stdio.h>

int chArray[255];
int hash[1<<24];


int main(void)
{
    int n, q = 1, hash_num = 0;
    char command[12], ch;

    chArray['A'] = 1;
    chArray['C'] = 2;
    chArray['G'] = 3;
    chArray['T'] = 4;
    scanf("%d", &n);
    while(n) {
        scanf("%s", command);
        while((ch = getchar()) != '\n') {
            hash_num += chArray[ch] * q;
            q *= 4;
        }
        if(strcmp(command, "insert") == 0) {
            hash[hash_num] = 1;
        } else if(strcmp(command, "find") == 0) {
            if(hash[hash_num])
                printf("yes\n");
            else
                printf("no\n");
        }
        q = 1;
        hash_num = 0;
        n--;
    }

    return 0;
}