#include<stdio.h>
#include<math.h>


main()
{
  float a,b,c,d,e,f,temp_a,temp_d;

  while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
  
   
      temp_a=a;
      temp_d=d;

      a=a*temp_d;
      b=b*temp_d;
      c=c*temp_d;
      d=d*temp_a;
      e=e*temp_a;
      f=f*temp_a;

   
      float x,y,sum;

      y=b-e;
      sum=c-f;
      y=sum/y;

      x=a;
      sum=c-(b*y);
      x=sum/x;
      if(fabs(x)==0){
	x=0;
      }
      if(fabs(y)==0){
	y=0;
      }

      printf("%0.3f %0.3f\n",x,y);
 
  }
  return 0;
}