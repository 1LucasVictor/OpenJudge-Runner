#include<stdio.h>
#include<string.h>
int main(void){
    char a[10000];
    char b[10000];
    int i, j, count=0;

    scanf("%s", a);
    scanf("%s", b);

    for(i=0; i<strlen(a); i++){
        if(a[i] != b[i]){
            ++count;
        }
    }

    printf("%d\n",count);

    return 0;

}