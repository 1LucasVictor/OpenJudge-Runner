#include <stdio.h>
int main(){
  int a,b,c,n,res,x;
  res=0;

  for(;;){
    scanf("%d%d",&n,&x);
    if(n==0&&x==0){break;}

    for(a=1;a<=n;a++){

      for(b=a+1;b<=n;b++){
	
	for(c=b+1;c<=n;c++){
	  if(a+b+c==x){res+=1;}    
	}
      }
    }
    
    printf("%d\n",res);
    res=0;
  }
  return 0;
}  