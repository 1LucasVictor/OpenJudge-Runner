#include <stdio.h>
int main(void)
{
	int s1;
	int s2;
	int s3;
	int i;
	int a;
	
    scanf("%d", &i);
    s3 = i % 10;
  	s2 = (i / 10) % 10;
  	s1= (i / 100) % 10;
  
    a = 0;
	
  	switch(s3){
      case 1:
        a++;
        break;
    }
        
   switch(s2){
     case 1:
       a++;
       break;
   }
       
  switch(s3){
    case 1:
      a++;
      break;
  }
  
  if(a >= 1){
    printf("%d", a);
  }
  
  else {
    printf("0");
  }
  
  return(0);
}
      