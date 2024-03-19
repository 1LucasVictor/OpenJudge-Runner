#include <stdio.h>
#include <string.h>
int i,j,m,h,t,a;
int main(void){
    char s[201]={};
    for(;scanf("%s%d",s,&m),s[0]!='-';puts("")){
        a=strlen(s);
        for(i=t=0;i<m;scanf("%d",&h),t+=h,i++);
        for (i=0;i<a;i++){
            printf("%c", s[(t+i) % a]);
        }
    }
}