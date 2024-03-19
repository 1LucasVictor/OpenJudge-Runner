#include <stdio.h>
int  main(){
  int a[6],i,j,b,z=0;
  for (i=0;i<6;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    	if(abs(a[i]-a[j])<a[5]){
          
        }else{
          z++;
        }
    }
  }
      	if(z<=0){
          printf("Yay!\n");
        }else{
          printf(":(\n");
        }

  return (0);
}
       