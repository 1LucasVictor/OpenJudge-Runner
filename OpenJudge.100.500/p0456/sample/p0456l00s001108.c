#include <stdio.h>
int main(){
    char a[200000], b[200000];
    int count;
    scanf("%s%s", a, b);
    for (int i = 0; i < strlen(a); i++)
    {
        if(a[i] != b[i]){
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}