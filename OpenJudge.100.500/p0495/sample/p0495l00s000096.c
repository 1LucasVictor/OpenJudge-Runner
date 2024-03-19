#include<stdio.h>
int main(){
 int i,j,k,b,c;
  char a;
  int x[2]={0};
  for(i=0;i<3;i++)
  {
    scanf("%c",&a);
    if(a=='A'){
    x[0]+=1;
    }
    else if(a=='B'){
    x[1]+=1;
    }

  }
  if(x[0]==2 || x[1]==2)
    printf("Yes\n");
  else
    printf("No\n");
return 0;
}
