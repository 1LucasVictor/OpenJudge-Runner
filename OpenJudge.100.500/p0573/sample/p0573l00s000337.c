#include<stdio.h>
#include<string.h>
int main()
{
    char x[5];
    int i,o=0,t=0,j,p;
    scanf("%s",x);
    for(i=1;i<4;i++)
    {
        if(x[0]==x[i]) {
            j=i;
        }
    }
     for(i=1;i<4;i++)
    {if(i!=j && x[0]!=x[i]){
            o++;
        }
    }
    if(o==2) printf("Yes\n");
    else printf("No\n");
    return 0;
}