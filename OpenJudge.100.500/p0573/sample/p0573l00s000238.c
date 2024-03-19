#include <stdio.h>

int main(void) {
    char s[4];
    scanf("%s", s);
    int j;
    int i = 0;
    int tmpcount;
    int flag = 1;
    char tmp[4];
    strcpy(tmp, s);
    while(s[i]){
        flag = 1;
        for(j=i+1;j<4;j++){
            tmpcount = j;
            if(s[i]==s[j]){
                while(s[tmpcount]){
                    s[tmpcount] = s[tmpcount+1];
                    tmpcount++;
                }
                tmpcount = i;
                while(s[tmpcount]) {
                    s[tmpcount] = s[tmpcount+1];
                    tmpcount++;
                }
                flag = 0;
                break;
            }
        }
        if(flag==1)
            break;

    }
    if(s[0]=='\0')
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}