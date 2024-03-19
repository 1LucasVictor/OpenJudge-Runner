#include<stdio.h>
int main()
{   int n,m,s[5],c[5],i,j,t,p=1,q=1,k[3]={0};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    scanf("%d%d",&s[i],&c[i]);
    if(n==1)
    {  if(m==1) printf("%d",c[0]);
       else 
       {  t=c[0];
          for(i=0;i<m;i++)
          if(c[i]!=t) {printf("-1");p=0;}
          if(p) printf("%d",t);
	   }
    }
    else
    {  t=0;
	   for(i=0;i<m;i++)
       if(s[i]==1&&c[i]==0) {printf("-1");p=0;}
       if(p)
	   {  k[0]=s[0];
	      for(i=1;i<m;i++)
	      if(s[i]==k[t])
	      if(c[i]!=c[t])
	         { printf("-1");
	           p=0;
			 }
       }
       if(p)
       {  for(i=0;i<m;i++)
          if(s[i]==1) {printf("%d",c[i]);q=0;i=m;}
          if(q) printf("1");
          q=1;
          for(i=0;i<m;i++)
          if(s[i]==2) {printf("%d",c[i]);q=0;i=m;}
          if(q) printf("0");
          q=1;
		  if(n==3)
		  {for(i=0;i<m;i++)
          if(s[i]==3) {printf("%d",c[i]);q=0;i=m;}
		  if(q) printf("0");
		  }
	   }
	}
} 