#include <stdio.h>
#include <math.h>

int main(void){
    char s[100001];
    scanf("%s", &s);
    int count = 0;
    int i = 1;
    while(s[i] != '\0'){
        int j = i-1;
        while(s[j] == 'a' && j > 0)j--;
        if(s[i] != s[j] && s[j] != 'a'){
            count += 2;
            s[i] = 'a';
            s[j] = 'a';
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}