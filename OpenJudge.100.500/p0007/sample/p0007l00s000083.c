#include<stdio.h>
main(){
  
  int a,b,c,d,num,ans=0;
  
  while(scanf("%d",&num)!=EOF){
    
    for(a=0;a<=9;a++){
      for(b=0;b<=9;b++){
	for(c=0;c<=9;c++){
	  for(d=0;d<=9;d++){
	    if(a+b+c+d==num){
	      ans=ans+1;
	    }
	  }
	}
      }
    }
    
    printf("%d\n",ans);
    ans=0;
  }
  return 0;
}