#include <stdio.h>
main(){
  int n,i,j;
  while(scanf("%d",&n) !=EOF){
    int c=0,jud;
    for(i=2;i<=n;i++){
      jud=1;
      for(j=2;j<i;j++){
	if(i%j==0){
	  jud=0;
	  break;
	}
      }
      if(jud==1) c++;
    }

    printf("%d\n",c);
  }
  return 0; 
}