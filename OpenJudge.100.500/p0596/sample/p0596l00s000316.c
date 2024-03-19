
#include <stdio.h>

int minimum(int, int);

int main(){
    char s[100001];
    int cnt0=0, cnt1=0, i=0;

    scanf("%s", s);

    while(s[i] != '\0'){
        if(s[i] == '0')
            cnt0++;
        else
            cnt1++;
        
        i++;
    }

    printf("%d\n", minimum(cnt0, cnt1)*2);

    return 0;
}

int minimum(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}