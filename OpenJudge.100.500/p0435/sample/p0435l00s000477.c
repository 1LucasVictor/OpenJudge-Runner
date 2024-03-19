#include<stdio.h>
#include<math.h>
int main()
{
  float i,n,d,c=0;

  scanf("%f%f",&n,&d);

  for(i=0;i<n;i++)
  {
      float j;
    float p,q;
     scanf("%f%f",&p,&q);
     j=sqrt((p*p)+(q*q));
     if(j<=d)
     {
         c++;
     }
  }
printf("%.0f\n",c);
return 0;
}

