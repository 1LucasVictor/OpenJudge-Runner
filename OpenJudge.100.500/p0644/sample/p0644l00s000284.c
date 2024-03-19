#include<stdio.h>
#include<string.h>

int main(){
    int b;
    char a[4];
    char c[4];
    scanf("%s",a);
    strcpy(c,a);
    for (int i = 0; i < 3; i++)
    {
        if(c[i] == '1'){
            b++;
        }
    }
    printf("%d",b);
    
}