#include <stdio.h>
#include <string.h>
    
int main(int argc, const char * argv[]) {
    int i,j,m,h;
    char s[301],s1[301],s2[301];
    
    while(1){
        scanf("%s",s);
        if(s[0] == '-') break;
        scanf("%d",&m);
        for(i=0;i<m;i++){
            scanf("%d",&h);
            strcpy(s1,s);
            strcpy(s2,s);
            strcat(s1,s2);
            for(j=0;j<strlen(s)*2;j++){
                s1[j] = s1[j+h];
            }
            for(j=0;j<strlen(s);j++){
                s[j] = s1[j];
            }
        }
        for(i=0;i<strlen(s);i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}