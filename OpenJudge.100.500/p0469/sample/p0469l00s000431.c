#include<stdio.h>
int main()
{ int A,B,K,i,count;
 scanf("%d%d%d",&K,&A,&B);
 for(i=1;i<=B;i++)
 { if((A<=(K*i))&&((K*i)<=B))
   count=count+1;
 }
 if(count!=0)
   printf("OK");
  else 
    printf("NG");
return 0;
}
 
