#include<stdio.h>
 
int main()
{
    int a,b,c,d,e,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
    int x[5]={a,b,c,d,e};
    int i,j;
    int flag=0;
    for(i=0;i<5;++i) 
      {
          for(j=i+1;j<5;++j)
            {
                if(x[j]-x[i]>k)
                  {
                      flag=1;
                      break;
                  }
            }
            
            if(flag==1)
               break;
      }
      
      if(flag==1)
         printf(":(");
         
     else
       printf("Yay!");
}