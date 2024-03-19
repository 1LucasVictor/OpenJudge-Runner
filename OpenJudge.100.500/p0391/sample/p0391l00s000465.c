#include <stdio.h>
#include <string.h>

int main(void){
        char s[1001],com[20],p[1001],tmp;
        int i,j,q,a,b;
        scanf("%s",s);
        scanf("%d",&q);
        for(i=0;i<q;i++){
                scanf("%s %d %d",com,&a,&b);
                if(strcmp(com,"replace")==0){
                        scanf("%s",p);
                        for(j=0;j<=(b-a);j++)
                                s[a+j]=p[j];
                }else if(strcmp(com,"reverse")==0){
                        for(j=0;j<((b-a+1)/2);j++){
                                tmp=s[a+j];
                                s[a+j]=s[b-j];
                                s[b-j]=tmp;
                        }
                }else if(strcmp(com,"print")==0){
                        for(j=0;j<b-a+1;j++)
                                printf("%c",s[a+j]);
                        putchar('\n');
                }
        }
        return 0;
}