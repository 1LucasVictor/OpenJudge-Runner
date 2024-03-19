# include<stdio.h>
int main(){
  int n,j,l,c;
  /*c:const  j:judge l:limit  n:number*/
  scanf("%d",&n);
  c = n;
  if(n>81)l=3;
  else l=4;
  for(int i=1;i<l;i++){
  if(c%2 == 0)c = c/2;
  else if(c%3 == 0)c = c/3;
  else if(c%5 == 0)c = c/5;
  else if(c%7 == 0)c = c/7;
  else j--;
  }
  if(c <= 9)printf("Yes");
  else if(c<0)printf("No");
  else printf("No");
}