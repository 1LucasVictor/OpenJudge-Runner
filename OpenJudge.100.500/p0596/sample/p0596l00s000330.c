#include <stdio.h>

int main()
{
    char s[100000] = {0};
    scanf("%s",s);
    int n = 0;
    while(s[n]){
        n++;
    }
    int i = n;
    int j, k = 0;
    for(i = 0; i < n-1; i++){
        if((s[i] == '1' && s[i+1] == '0') || (s[i] == '0' && s[i+1] == '1')){
            for(j = i; j < n-2 ; j++){
                s[j] = s[j+2];
                s[j+2] = 2;
            }
            k += 2;
            n -= 2;
            i = -1;
        }
    }
    printf("%d\n",k);
    return 0;
}
