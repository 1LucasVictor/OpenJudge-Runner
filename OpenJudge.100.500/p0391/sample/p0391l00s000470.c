#include<stdio.h>
#include<string.h>
int main(){
  int i,j,n,a,b,c,k,l;
  char str[1001],mei[8],p[1001],x;
  scanf("%s %d",str,&n);
  for(i=0;i<n;i++){
    c=0;
    k=0;
    scanf("%s",mei);
    if(mei[2]=='i'){
      scanf("%d %d",&a,&b);
      for(j=a;j<=b;j++){
	printf("%c",str[j]);
	c=1;
      }
    }
      if(c!=0)printf("\n");
    else if(mei[2]=='v'){
      scanf("%d %d",&a,&b);
      for(j=a;j<=b/2+a;j++){
	x=str[j];
	str[j]=str[b];
	str[b]=x;
	b--;
      }
    }
    else if(mei[2]=='p'){
      scanf("%d %d %s",&a,&b,p);
      for(j=a;j<=b;j++){
	str[j]=p[k];
	k++;
      }
    }
  }
      return 0;
}
    