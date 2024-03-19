#include<stdio.h>
int main(){

int a, b;
int c;
scanf("%d%d", &a, &b);

for(int i = 0; i< b; i++){
	scanf("%d", &c);
   a -=c;
 }
 

 if(a <= 0) printf("Yes");
  else printf("No");
 
 return 0;
}
