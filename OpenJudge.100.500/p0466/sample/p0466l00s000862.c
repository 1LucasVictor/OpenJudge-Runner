#include <stdio.h>
#include <string.h>

int main(){
    char s[20];
    char t[21];
    int ans=0;

    scanf("%s ",s);
    scanf(" %s ",t);

    for(int i=0;i<strlen(s);++i){
        if(s[i]!=t[i]){
            ans+=1;
            break;
        }

}
    if(ans==0){
        printf("Yes\n");
    }else {
        printf("No\n");
    }


    return 0;

}
