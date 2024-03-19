#include<stdio.h>
#include<math.h>

int n,i,j=1;
int main()
{
     scanf("%d",&n); int in[n], res[n]; res[1]=0;
     for( i=2;i<=n;i++) {scanf("%d",&in[i]);res[i]=0;}
     int cnt=0;
     for( i=2;i<=n;i++)
     {
         if(in[i]==in[i+1]) cnt++;
         else {res[j]=cnt+1;cnt=0;j++;}
     }
     for( i=1;i<=n;i++) printf("%d\n",res[i]);

}
