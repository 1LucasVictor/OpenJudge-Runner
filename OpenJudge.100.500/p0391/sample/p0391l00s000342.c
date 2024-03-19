#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[1001],p[1001],cmd[10];
    int a,b,q,i,j;
    
    scanf("%s",str);
    scanf("%d",&q);
    
    for(i=0;i<q;i++)
    {
        char ans[1001]={};
        scanf("%s",cmd);
        
        if(strcmp(cmd,"print")==0)
        {
            scanf("%d %d",&a,&b);
            for(j=0;j<(b-a+1);j++)
            {
                ans[j]=str[j+a];
                ans[b-a+1]='\0';
            }
            printf("%s\n",ans);
        }
        else if(strcmp(cmd,"reverse")==0)
        {
            scanf("%d %d",&a,&b);
            strcpy(ans,str);
            char tmp[1001]={};
            for(j=0;j<(b-a+1);j++)
            {
                tmp[j]=str[b-j];
                ans[j+a]=tmp[j];
            }
            strcpy(str,ans);
        }
        else if(strcmp(cmd,"replace")==0)
        {
            scanf("%d %d %s",&a,&b,p);
            strcpy(ans,str);
            for(j=0;j<(b-a+1);j++)
            {
                ans[j+a]=p[j];
            }
            strcpy(str,ans);
        }
    }
    
    return 0;
}

