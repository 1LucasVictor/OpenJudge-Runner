#include <stdio.h>
#include <string.h>

int main(){
    char s[15];
    char t[15];
    //if(fgets(s, 10, stdin)==NULL){return 0;}
    //if(fgets(t, 11, stdin)==NULL){return 0;}
    if(scanf("%10s%*[^\n]%*c", s)==EOF){return 0;}
    if(scanf("%11s%*[^\n]%*c", t)==EOF){return 0;}
    int len = strlen(s);
    //printf("%s %s", s, t);
    for(int i = 0; i < len; i++){
        if(s[i]!=t[i]){
            printf("No\n");return 0;
        }
    }
    if(t[len+1]!= '\0'){printf("No\n");return 0;}

    printf("Yes\n");return 0;


}