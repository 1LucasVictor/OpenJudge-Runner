#include<stdio.h>
int main(){
    char a[4];
    for(int i=0;i<4;i++)
    scanf("%c",&a[i]);
    if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3])
    printf("Bad");
    else
    printf("Good");
    return 0;
}