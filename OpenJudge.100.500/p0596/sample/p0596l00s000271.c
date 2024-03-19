
#include <stdio.h>
#include <string.h>

int main(){
    int i, j, check=0, cnt=0, len, k;
    char s[100001];

    scanf("%s", s);

    len = strlen(s);

    if(len == 1){
        printf("0\n");
        return 0;
    }

    while(check != 2){
        for(i=1; i<len; i++){
            if(s[i-1] != ' '){
                j=i;
                for(j=i; j<len; j++){
                    if(s[j] != ' '){
                        if(s[i-1] != s[j]){
                            cnt+=2;
                            s[i-1] = ' ';
                            s[j] = ' ';
                            break;
                        }
                        else
                            break;
                    }
               }
            }
        }
        check++;
    }

    printf("%d\n", cnt);

    return 0;
}