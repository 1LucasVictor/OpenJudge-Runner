#include<stdio.h>
int main(){
  int a,b,c,n,i,j,m[3],temp,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    m[0]=a;
    m[1]=b;
    m[2]=c;
    for(v=0;v<2;v++){
      for(j=2;j>v;j--){
	if(m[j]<m[j-1]){
	  temp=m[j];
	  m[j]=m[j-1];
	  m[j-1]=temp;
	}
      }
    }
    a=m[0];
    b=m[1];
    c=m[2];
    if((a*a)+(b*b)==(c*c)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return (0);
}