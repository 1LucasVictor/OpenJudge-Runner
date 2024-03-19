#include <stdio.h>
#include <string.h>

char s[15], t[15];

int main () {
    scanf("%s%s",&s,&t);
    // printf("%s %s",s,t);
    int flag=1;
    for(int i=0;i<2;i++) {
        for(int j=0,k=i;j<strlen(s);k++,j++) {
            if(s[j]==t[k]) continue;
            else {
                break;
                flag=0;
            }
        }
        if (flag=1) {
            printf("Yes");
            return 0;
        }
        else flag=1;
    }
    printf ("No");
}