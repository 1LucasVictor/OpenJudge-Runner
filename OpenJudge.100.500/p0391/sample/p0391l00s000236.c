#include <stdio.h>

int meirei(char c[]){
  char print[8]="print",reverse[8]="reverse",replace[8]="replace";
  int i;
  for(i=0;i<8; i++){
    if(c[i]!=print[i])break;
    if(c[i]=='\0')return 1;
  }
  for(i=0;i<8; i++){
    if(c[i]!=reverse[i])break;
    if(c[i]=='\0')return 2;
  }
  for(i=0;i<8; i++){
    if(c[i]!=replace[i])break;
    if(c[i]=='\0')return 3;
  }
  return 0;
}
int main(){
  char str[1002],p[1002],fanc[8];
  int q,a,b,i,j,x;
scanf("%s",&str);
  scanf("%d",&q);
  for(i=0; i<q; i++){
    scanf("%s",&fanc);
    x=meirei(fanc);
    if(x==1){
      scanf("%d %d",&a,&b);
      for(j=a;j<=b; j++)printf("%c",str[j]);
      printf("\n");
    }
    if(x==2){
      scanf("%d %d",&a,&b);
      for(j=0; j<=b-a; j++)p[a+j]=str[b-j];
      for(j=a; j<=b; j++)str[j]=p[j];
    }
    if(x==3){
      scanf("%d %d",&a,&b);
      scanf("%s",&p);
      for(j=0; j<=b-a; j++)str[a+j]=p[j];
    }
  }
return 0;
}