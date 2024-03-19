#include<stdio.h>
main(){
  int n,a,b,c,d,x=0;

  while(scanf("%d",&n) != EOF){
    x=0;
    for(a=0 ; a<=9 ; a++){
      for(b=0 ; b<=9 ; b++){
	for(c=0 ; c<=9 ; c++){
	  for(d=0 ; d<=9 ; d++){
	    if(a + b + c + d == n){
	      x=x+1;  /*組み合わせの数を計算*/
	    }
	  }
	}
      }
    }
    printf("%d\n",x);
  }

  return 0;
}