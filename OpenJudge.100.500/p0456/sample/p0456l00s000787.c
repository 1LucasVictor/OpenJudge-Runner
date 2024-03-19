#include <stdio.h>
#include <string.h>

int occurence_change(char*s,char*t){
    int cnt = 0;
    if(!strcmp(s,t)) return cnt;
    for(int i = 0; i <20000;i++){
            if(s[i]=='\0') break;
            if(s[i]!=t[i])cnt++;
        }
    return cnt;
}

int main(int argc,char*argv[]){
    char s[200000];
    char t[200000];
    int s1 = scanf("%s",s);
    int s2 = scanf("%s",t);
    printf("%d\n",occurence_change(s,t));
    return 0;
}
