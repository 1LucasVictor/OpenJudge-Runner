#include<stdio.h>
#include<string.h>
int main(){
  int q,a,b,i,j=0,k=0;
  char str[1000],y[8],z[1000],x[1000];
  char *p="print",*rev="reverse",*rep="replace";
  scanf("%s",str);
  scanf("%d",&q);
  for(k=0;k<q;k++){
    scanf("%s",y);
    if (strcmp(y,p)==0) {
      scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++){
	printf("%c",str[i]);
	if(i==b)printf("\n");
      }
    }else if (strcmp(y,rev)==0){
      scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++){
        z[i]=str[i];
      }
      for(i=a,j=b;i<=b;i++,j--){
        str[i]=z[j];
      }
    }else if (strcmp(y,rep)==0) {
      scanf("%d %d %s",&a,&b,x);
      for(i=a,j=0;i<=b;i++,j++){
        str[i]=x[j];
      }
    }
  }
  return 0; 
}


