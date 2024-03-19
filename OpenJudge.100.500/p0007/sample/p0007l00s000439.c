#include<stdio.h>
main(){
  int n,a,b,c,d,abcd,sum;
  while(scanf("%d",&n)!=EOF){
    abcd=0;

    for(a=0;a<=9;a++){
      for(b=0;b<=9;b++){
	for(c=0;c<=9;c++){
	  for(d=0;d<=9;d++){
	    sum=n;
	    sum=sum-a-b-c-d;
	    if(sum==0){
	      abcd++;
	    }
	  }
	}
      }
    }

    printf("%d\n",abcd);

  }
  return 0;
}