#include<stdio.h>
int main(){
  int n,a,b,c,t;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){t=a;a=b;b=t;}
    if(a<c){t=a;a=c;c=t;}
    if(a*a==b*b+c*c)printf("YES\n");
    else            printf("NO\n");
 }
 return 0;
}