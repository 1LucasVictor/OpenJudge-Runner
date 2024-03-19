#include<stdio.h>
#include<string.h>
int main(void){
    char str[200];
    char s1[200];
    char s2[200];
    int num;
    int shuf;
    int i,j;
    while(1){
        scanf("%s",str);
        if(strcmp(str,"-")==0) break;
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&shuf);
            for(j=0;j<shuf;j++)
                s1[j]=str[j];
            for(j=0;j<strlen(str)-shuf;j++)
                str[j]=str[j+shuf];
            for(j=0;j<shuf;j++)
                str[strlen(str)-shuf+j]=s1[j];
        }
        printf("%s\n",str);
    }
    return 0;
}