#include<stdio.h>
#include<string.h>
int main()
{
    char x[5];
    int i,o=0,t=0,j,p;
    scanf("%s",x);
    for(i=1;i<4;i++)
    {
        if(x[0]==x[i]) {j=i;
            o++;
         if(i<3) p=i+1;
            else p=i-1;
        }
        
    }
    if(o==1) {
        for(i=1;i<4;i++)
        {
            if(i!=j&& x[i]!=x[0] )
            {
               if(x[p]==x[i]) t++;
            }
            
        }
    
    if(t>=1) printf("Yes\n");
    else printf("No\n");}
    else printf("No\n");
    return 0;
}