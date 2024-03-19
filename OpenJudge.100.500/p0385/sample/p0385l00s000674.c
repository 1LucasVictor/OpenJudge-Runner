#include<stdio.h>
int main(void)
{
    char in[1001];
    int i,out;
    while(1)
    {
        for(i=0;i<1001;i++)
        {
            in[i]=0;
        }
        out=0;
       scanf("%s",in);
       if(in[0]=='0') break;
       for(i=0;i<1000;i++)
       {
           if(in[i]==0) break;
           out += in[i]-'0';
       }
       printf("%d\n",out);
    }
    return 0;
}