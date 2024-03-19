#include <stdio.h>
#include <math.h>

int main(){
    char a[200000];
    char b[200000];

    scanf("%s", a);
    scanf("%s", b);

    int count = 0;
    for (int i = 0; i < sizeof(a); i++){
        if (a[i] == '\0') break;
        if (a[i] != b[i]) count++;
    }

    printf("%d\n", count);

    return 0;
}