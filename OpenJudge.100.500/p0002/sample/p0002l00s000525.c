#include<stdio.h>
int main(){
  int n;
  int z,w,a;
  int i;
  scanf(" %d",&n);
  for(i=0;i<n;i++){
    scanf(" %d %d %d",&z,&w,&a);
    if((z*z)+(w*w)==a*a){
      printf("YES\n");
    }else{
      if((w*w)+(a*a)==z*z){
	printf("YES\n");
      }else{
	if((a*a)+(z*z)==w*w){
	  printf("YES\n");
	}else{
	  printf("NO\n");
	    }
      }
    }
  }
  return(0);
}
    