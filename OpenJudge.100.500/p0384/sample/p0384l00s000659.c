#include <stdio.h>

#include <ctype.h>



int main(){



  char a[1200];



  fgets(a,sizeof(a),stdin);



  int i;

  

  for(i=1;i<=1200;i++){



    if(a[i-1]=='\n')



      break;



    if(isupper(a[i-1]))



      printf("%c",tolower(a[i-1]));



    else if(islower(a[i-1]))



      printf("%c",toupper(a[i-1]));



    else



      printf("%c",a[i-1]);



  }



  printf("\n");



  return 0;



}