#include<stdio.h>
int main()
{
int a,b,i,e,f,g;
  scanf("%d %d",&a,&b);
int s[b],c[b],d[a];
  f=0;
  g=0;
  for(i=0;i<a;++i) {d[i]=10;}
  
  for(i=0;i<b;++i)
  {scanf("%d %d",&s[i],&c[i]);
  e=s[i]-1;
   if(d[e]==10) d[e]=c[i];
  else if(d[e]!=c[i]) f++;
  }

  if(f>0) printf("-1");
  else if(a>1 && d[0]==0) printf("-1");
  
else{
     for(i=0;i<a;++i)
     {
     if(d[i]==10 && i!=a-1)  d[i]=0;
     else if(d[i]==10 &&  i==a-1) d[i]=1;
     g=g+d[i]*pow(10,a-i-1);
     }
   
    printf("%d",g);
    }
return 0;
}