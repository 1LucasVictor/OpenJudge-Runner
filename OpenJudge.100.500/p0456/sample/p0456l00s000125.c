#include <stdio.h>
#include <string.h>
 
int main() {
    int change = 0;
	char str1[200002] = {0}, str2[200002] = {0};
    fgets(str1, 200002, stdin);
    fgets(str2, 200002, stdin);
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) {
            change++;
        }
    }
    printf("%d", change);
}