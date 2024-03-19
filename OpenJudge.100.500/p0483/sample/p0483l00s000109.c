#include<stdio.h>
int print_Yes_No(int x){
  if(x==0)printf("Yes\n");
  if(x==1)printf("No\n");
  return 0;
                 }
int main(){
  int M, a=0, b=0, c=0;
  scanf("%d", &M);
  a=M%10;
  b=((M-a)/10)%10;
  c=((M-a-b*10)/100)%10;
  //printf("%d %d %d",a,b,c);
  if(a==7){
    print_Yes_No(0);}
  else
    if(b==7){
    print_Yes_No(0);}
  else
    if(c==7){
    print_Yes_No(0);}
  else{print_Yes_No(1);}
  return 0;
}