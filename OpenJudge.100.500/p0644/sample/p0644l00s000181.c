#include <stdio.h>
#include <string.h>

int main() {
    int unused __attribute__((unused));

    char s[3];
    scanf("%s", s);
    int cnt=0;
    if(s[0]=='1'){
        cnt+=1;
    }
    if (s[1] == '1') {
        cnt += 1;
    }
    if (s[2] == '1') {
        cnt += 1;
    }
    printf("%d",cnt);
    
    return 0;

}
