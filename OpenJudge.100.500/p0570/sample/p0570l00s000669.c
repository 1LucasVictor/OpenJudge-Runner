#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,c,d,i,p,k;
     scanf("%d %d",&a,&b);
     if(a>b)
          p=a;
     else
          p=b;
     for(i=0;i<p;i++){
          c=abs(a-i);
          d=abs(b-i);
          if(c==d){
              k=i;
            break;
          }
     }
     if(c==d)
     printf("%d\n",k);
     else
       printf("IMPOSSIBLE\n");

}
