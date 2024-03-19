#include<stdio.h>
#include<string.h>
int main(){
    int m,i,h,len;
    int count=0;
    char str[404],inc[203];

    while(1){
        scanf("%s",str);
        if(str[0]=='-') break;
        scanf("%d",&m);
        for(i=0;i<m;i++){
            scanf("%d",&h);
            count+=h;
        }
        len=strlen(str);
        count%=len;
        strcpy(inc,str);
        strcat(str,inc);
        strncpy(inc,str+count,len);
        printf("%s\n",inc);
        count=0;
    }

    return 0;
}
