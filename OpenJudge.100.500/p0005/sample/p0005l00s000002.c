#include<stdio.h>
int main(){
    int n,i;
    char data[21],sd[21];
    scanf("%s",data);
    for (n=0;data[n] != '\0';n++);
    for (i=n-1;i >=0;i--)printf("%c",data[i]);
    printf("\n");
    return 0;
}