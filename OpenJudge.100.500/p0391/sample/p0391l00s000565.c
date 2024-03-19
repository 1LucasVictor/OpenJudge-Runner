#include <stdio.h>
#include <string.h>

int main(){
    int q, a, b, str_length, p_length;
    int i, j;
    char str[1028], get[1028], tmp[1000], command[16];

    scanf("%s%d", str, &q);
    while(q--){
        scanf("%s%d%d", command, &a, &b);
//        printf("%s%d%d\n", command, a, b);
        switch(command[2]){
            case 'i':
                for(i=a; i<=b; i++){
                    printf("%c", str[i]);
                }
                printf("\n");
                break;
            case 'v':
                for(i=0; i<a; i++){
                    tmp[i]=str[i];
                }
                for(i=b, j=a; i>=a; i--, j++){
                    tmp[j]=str[i];
                }
                for(i=b+1; i<strlen(str); i++){
                    tmp[i]=str[i];
                }
                for(i=0; i<strlen(str); i++){
                    str[i]=tmp[i];
                }
                break;
            case 'p':
                scanf("%s", get);
                for(i=0; i<a; i++){
                    tmp[i]=str[i];
                }
                for(i=a, j=0; i<=b; i++, j++){
                    tmp[i]=get[j];
                }
                for(i=b+1; i<strlen(str); i++){
                    tmp[i]=str[i];
                }
                for(i=0; i<strlen(str); i++){
                    str[i]=tmp[i];
                }
                break;
        }
    }

    return 0;
}

