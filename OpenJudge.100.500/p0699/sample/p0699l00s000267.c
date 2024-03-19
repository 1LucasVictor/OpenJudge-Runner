#include <stdio.h>
#include <string.h>

int main(){
 int a;
 int b;
 int c;
	if(!((scanf("%d",&a)==1) 
		&& (scanf("%d",&b)==1)
	&& (scanf("%d",&c)==1))){
		return -1;
	}
 
 if((a==5&&b==5&&c==7)||(a==5&&b==7&&c==5)||(a==7&&b==5&&c==5)){
  printf("YES");
 } else {
  printf("NO");
 }
  return 0;
}