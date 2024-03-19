#include<stdio.h>
int main(){
    char a[4];
    scanf("%s",a);
    if(a[0] == '7' || a[1] == '7' || a[2] == '7')
        puts("Yes");
    else
        puts("No");
    return 0;
}