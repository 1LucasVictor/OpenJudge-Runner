#include <stdio.h>
int main(void){
        int i;
        char str[1201];
        fgets(str,1201,stdin);
        for(i=0; str[i]!='\0'; i++){
                if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= ('a'-'A');
                else if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] += ('a'-'A');
        }
        printf("%s",str);
        return 0;
}
