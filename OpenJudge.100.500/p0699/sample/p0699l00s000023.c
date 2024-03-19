#include<stdio.h>

int check(int str[]){
  int se=0;
  int fi=0;
  for(int i=0;i<3;++i){
    if(str[i]==7){
      se+=1;
    }
    else if(str[i]==5){
      fi+=1;
    }
  }
  /*printf("%d",se);
  printf("%d",fi);*/
  if(se==1 && fi==2){
    return 1;
  }
  return 0;
}

int main(){
  int a,b,c,ch;
  int d[3];
  scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
  d[0]=a;d[1]=b;d[2]=c;
  /*printf("%d",d[0]);
  printf("%d",d[1]);
  printf("%d",d[2]);*/
  ch=check(d);
  if(ch==1){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
}
