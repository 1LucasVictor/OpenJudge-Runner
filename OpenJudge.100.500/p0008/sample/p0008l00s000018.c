#include <stdio.h>
main(){
  int n,i,j;
  while(scanf("%d",&n) !=EOF){
    int c=0,jud;
    if(n>=2) c++;
    for(i=3;i<=n;i+=2){
      jud=1;
      if(i!=3&&i%3==0) continue;
      if(i!=5&&i%5==0) continue;
      if(i!=7&&i%7==0) continue;
      if(i!=11&&i%11==0) continue;
      for(j=2;j*j<=i;j++){
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