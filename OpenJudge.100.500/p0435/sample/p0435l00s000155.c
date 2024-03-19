#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n,d,c=0,i,x,y;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(sqrt(pow(x,2)+(pow(y,2)))<=d)
        c++;
    }
    printf("%d\n",c);
    return 0;
  }