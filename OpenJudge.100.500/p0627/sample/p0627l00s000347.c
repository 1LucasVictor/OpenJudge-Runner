#include<stdio.h>
int main(){
    int a, b, jum, min, kali;
    scanf("%d %d", &a, &b);
    jum = a+b;
    min = a-b;
    kali = a*b;
    if(jum >= kali && jum >= min) printf("%d", jum);
    else if(kali >= jum && kali >= min) printf("%d", kali);
    else printf("%d", min);
    return 0;
}