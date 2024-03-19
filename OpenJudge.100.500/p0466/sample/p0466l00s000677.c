#include <stdio.h>
#include <string.h>

char s[15], t[15];

int main () {
    scanf("%s%s",&s,&t);
    // printf("%s %s",s,t);
    int flag=1;
    for(int i=0;i<2;i++) {
        for(int j=0,k=i;j<strlen(s);k++,j++) {
            // printf("%c %c ", s[j], t[k]);
            if(s[j]==t[k]) continue;
            else {
                flag=0;
                break;
            }
            // printf("\nflag: %d\n",flag);
        }
        if (flag==1) {
            printf("Yes");
            return 0;
        }
        else flag=1;
    }
    printf ("No");
}