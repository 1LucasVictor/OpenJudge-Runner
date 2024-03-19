#include <stdio.h>

int main(){
    int cnt0 = 0;
    int cnt1 = 0;
    char S[10^5];
    scanf("%s", S);

    for (int i=0; S[i]; i++){
        if(S[i] == '0')
            cnt0++;
        if(S[i] == '1')
            cnt1++;
    }
    if (cnt0 < cnt1)
        printf("%d\n",cnt0 * 2);
    else
        printf("%d\n",cnt1 * 2);
    return 0;
}