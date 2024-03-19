#include <stdio.h>
int main(void)
{
    int i=0, cnt1=0, cnt0=0;
    char s[1000000];
    scanf("%s", s);

    while(s[i]!='\0'){
        if(s[i]=='1') cnt1++;
        else if(s[i]=='0') cnt0++;
        i++;
    }

    if(cnt1>=cnt0 && cnt1>0 && cnt0>0) printf("%d\n", 2*cnt0);
    else if(cnt1>0 && cnt0>0) printf("%d\n", 2*cnt1);
    else printf("%d\n", 0);
    
    return 0;
}
