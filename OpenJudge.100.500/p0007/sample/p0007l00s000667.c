#include <stdio.h>
main(){
  int n,i,j,k,l,a,c;
  while(scanf("%d",&n) !=EOF){
    a=0;
    if(a<=36){
      for(i=0;i<=9;i++){
	c=i;
	for(j=0;j<=9;j++){
	  c+=j;
	  for(k=0;k<=9;k++){
	    c+=k;
	    for(l=0;l<=9;l++){
	      c+=l;
	      if(c==n){
		a++;
		c-=l;
		break;
	      }
	      c-=l;
	    }
	    c-=k;
	  }
	  c-=j;
	}
	c-=i;
      }


    }
    printf("%d\n",a);
  }
  return 0;
}