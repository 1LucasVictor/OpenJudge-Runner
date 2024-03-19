#include<stdio.h> 
int main() 
{ 
int x,a,b; 
scanf("%d%d%d",&x,&a,&b); 

if(b-x>0&&b-x<a)printf("YES\n"); 
else printf("NO\n"); 
return 0; 
}