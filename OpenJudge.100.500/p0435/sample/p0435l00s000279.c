#include<stdio.h>
#include<math.h>
int main()
{
   int n,d,c=0,i;
    scanf("%d %d",&n,&d);
    int x,y;
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if((x*x+y*y)<=d*d)
        c++;
    }
    printf("%d\n",c);
    return 0;
  }