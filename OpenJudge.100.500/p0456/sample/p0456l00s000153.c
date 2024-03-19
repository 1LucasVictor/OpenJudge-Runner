#include <stdio.h>
#include <string.h>
 
int main(){
    char x[2000000], y[2000000];
    int len, i, count = 0;
    scanf("%s %s", &x, &y);
    len = strlen(x);
    for (i = 0; i < len; i++){
        if (x[i] != y[i]) count++;
    }
    printf("%d", count);
    return 0;
}
