#include<stdio.h>
int main(){
    int i, str[20], l=0;
    while((str[l++]=getchar())!='\n'){}
    for(i=l-2; i>=0; i--)printf("%c", str[i]);
    return 0;
}