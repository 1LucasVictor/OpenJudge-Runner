#include<stdio.h>
main()
{
  int n, a, b, c, cn;//(cn= テδ、テつサテつ甘δ」テつつョn)

  scanf("%d", &n);//the number of date set

  for(cn=0 ; cn < n ; cn++){

    scanf("%d %d %d", &a, &b, &c);
  
    if(a*a== b*b +c*c || b*b== a*a + c*c || c*c == a*a + b*b){

      printf("YES\n");
    }
      else{printf("NO\n");

      }

    
  }
  return 0;

}