#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,n=0,h,w,j,i,c=0;
    char x[100],y[100];
    scanf("%s%s",x,y);
    for(i=strlen(y)-1;i>=0;i--)
    {
        y[i]='\0';
        if(strcmp(x,y)==0)
        {
            c=1;
            break;
        }
    }
    if(c==1){printf("Yes\n");}
    else{printf("No\n");}



    return 0;
}
