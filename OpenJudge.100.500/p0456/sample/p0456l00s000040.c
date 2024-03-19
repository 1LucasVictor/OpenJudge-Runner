#include <stdio.h>
#include <string.h>
 
int main() {
    int change = 0;
	char str1[100000] = {0}, str2[100000] = {0};
    fgets(str1, 100000, stdin);
    fgets(str2, 100000, stdin);
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) {
            change++;
        }
    }
    printf("%d", change);
}