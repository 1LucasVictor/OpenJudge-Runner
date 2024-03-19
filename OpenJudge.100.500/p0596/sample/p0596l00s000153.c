#include<stdio.h>

int main(void){
    char S[100001];
    scanf("%s", S);

    int cnt0 = 0;
    int cnt1 = 0;
    int i;
    char *ps = S;
    while(*ps != '\0'){
        if(*ps == '0'){cnt0++;}
        else{cnt1++;}
      	ps++;
    }
    if(cnt0 > cnt1){printf("%d", 2 * cnt1);}
    else{printf("%d", 2 * cnt0);}

    return 0;
}