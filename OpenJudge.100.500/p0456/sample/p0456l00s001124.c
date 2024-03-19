#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int len = 2*pow(10,5)+1;
    char s[len], t[len];
    scanf("%s", s);
    scanf("%s", t);

int n=0;
for(int i=0; strlen(s)>i ; i++){
    if(s[i] != t[i])  n++;
}

    printf("%d\n", n);
    return 0;
}