#include<stdio.h>
#include<string.h>

int main(void)
{
   int n, i, b, g;
   char s[100000];

   scanf("%s",s);
   n=strlen(s);
   i=-1;
   b=0;
   while(i<n){
        i=i+1;
        if(((s[i]=='0')&&(s[i+1]=='1'))
                                   ||((s[i]=='1')&&(s[i+1]=='0'))){
                b=b+2;
                n=n-2;
                for(g=i;g<n;g++){
                        s[g]=s[g+2];
                }
        if(i>0) i=-1;
        }
   }


   printf("%d\n",b);
   return 0;
}

