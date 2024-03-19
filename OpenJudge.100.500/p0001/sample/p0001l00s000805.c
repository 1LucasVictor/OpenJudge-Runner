#include<stdio.h>
#include<math.h>
main()
{
  int a,b,i,c=0;
  while(scanf("%d %d",&a,&b)!=EOF){
  

    a=a+b;
    if(a==0){
      a=1;
    }
    c=(int)log10(a);
 
 
    printf("%d\n",c+1);
  }
  return 0;
}