#include <stdio.h>

 int main()
 {
  int a,b,c,i,count;


    scanf("%d %d %d",&a,&b,&c);
    count = 0;
    for (i = a;  i<b; i++){
      if (80%i==0){
      count = count+1;
    }


   }
   
  printf("%d\n",count);

return(0);
}