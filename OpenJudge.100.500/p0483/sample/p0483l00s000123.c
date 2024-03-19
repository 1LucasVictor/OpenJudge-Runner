#include <stdio.h>
#include <string.h>

int main(){
    char a[3];
    int b=0;

    scanf("%s", a);
    int n=0;
    while(a[n] != '\0'){
        if(a[n] == '7'){
            b = 1;
            printf("Yes");
            break;
        }
        n++;
    }
    if(b == 0) printf("No");
    }