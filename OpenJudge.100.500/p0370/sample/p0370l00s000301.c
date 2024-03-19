#include<stdio.h>
int main(){
  int a,b;
  char ch;
  
  scanf("%d %c %d",&a,&ch,&b); 
  while(ch != '?'){
    switch(ch){
    case  '+':
    printf("%d\n",a+b);
    scanf("%d %c %d",&a,&ch,&b);
    break;

    case '-':
    printf("%d\n",a-b);
    scanf("%d %c %d",&a,&ch,&b);
    break;
  
    case '*':
    printf("%d\n",a*b);
    scanf("%d %c %d",&a,&ch,&b);
    break;

    case '/':
    printf("%d\n",a/b);
    scanf("%d %c %d",&a,&ch,&b);
    break;

    default:
    break;}}

  return 0;

}