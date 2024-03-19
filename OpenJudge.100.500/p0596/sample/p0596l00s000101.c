#include<stdio.h>

int main(void)
{
        char s[99999];
        int i, a, b;

        scanf("%s", s);

        for(i=0; s[i]!='\0'; i++){
                if(s[i]=='0') a++;
                else if(s[i]=='1') b++;
        }
        if(a<b) printf("%d\n", a*2);
        else printf("%d\n", b*2);

        return 0;
}
