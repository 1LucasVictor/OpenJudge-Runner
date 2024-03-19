#include<stdio.h>
#include<stdio.h>
int main(){
  int i,j,k,h,m,a,l;
  char n[202],x;
  while(scanf("%s",n)){
    if(strcmp(n,"-")==0)break;
    scanf("%d",&m);
    int len  =strlen(n);
    for(i=0;i<m;i++){
      scanf("%d",&a);
      for(l=0;l<a;l++){
	x=n[0];
	for(j=0;j<len;j++){
	  n[j]=n[j+1];
      }
	n[len-1]=x;
      }
    }
    for(k=0;k<len-1;k++){
      printf("%c",n[k]);
    }
    printf("%c\n",n[len-1]);
  }
  return 0;
}