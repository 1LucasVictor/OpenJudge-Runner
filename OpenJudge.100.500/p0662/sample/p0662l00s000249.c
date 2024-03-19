#include<stdio.h>
int main()
{
  int a[4];
  int i,j=0;
  for(i=0;i<4;i++)
       scanf("%d",&a[i]);
  if(a[1]<=a[2]||a[3]<=a[0])
       printf("%d",j);
 else{
    for(i=0;i<4;i++)
          for(j=0;j<3;j++)
                 if(a[j]>a[j+1])
                     {
        int temp=a[j];   a[j]=a[j+1],a[j+1]=temp; 
              }
         printf("%d",a[2]-a[1]);
}
   return 0;
}