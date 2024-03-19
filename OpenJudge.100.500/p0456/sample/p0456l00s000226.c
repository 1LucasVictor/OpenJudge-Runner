#include <stdio.h>

int main(){

    char a[200000];
    char b[200000];

    int d = 0;


    scanf("%s %s",a,b);

    for(int i = 0;a[i] != '\0'; ++i){
        if(a[i] != b[i])
            ++d;
    }
    printf("%d\n",d);

    return 0;
}