#include<stdio.h>
#include<string.h>
#define MAXS 200
char s[MAXS];
char qs[MAXS];
void qupop(int shn,int mode,int len){
    int i;
    if(mode == 1){
        for(i = 0;i < shn;i++){
            qs[i] = s[i];
        }
        for(i = shn;i < len;i++){
            s[i-shn] = s[i];
        }
    }
    else{
        for(i = shn;i < len;i++){
            s[i-shn] = s[i];
        }
    }
}
void qupush(int shn,int len){
    int i;
    for(i = shn;i >= 0;i--){
        s[len-i] = qs[shn-i];
    }
}
int main(){
    while(1){
        scanf("%s",s);
        if(s[0] == '-'){
            break;
        }
        size_t len = strlen(s);
        int sh;
        scanf("%d",&sh);
        int i,j;
        for(i = 0;i < sh;i++){
            int shn;
            scanf("%d",&shn);
            qupop(shn,1,len);
            qupush(shn,len);
            for(j = 0;j < len;j++){
                qs[j] = 0;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}