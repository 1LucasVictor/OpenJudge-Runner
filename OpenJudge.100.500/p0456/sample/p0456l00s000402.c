#include<stdio.h>
#include<string.h>
int main(){
    char a[30000];
    char b[30000];
    int i, count = 0, result;
    result = scanf("%s", a);
    result = scanf("%s", b);
    for(i = 0; i < strlen(a); i++){
        if(a[i] != b[i]){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}