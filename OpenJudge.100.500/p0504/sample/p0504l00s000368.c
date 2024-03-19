#include <stdio.h>
int main(){
int H,A;
scanf("%d %d",&H,&A);
int c = H/A;
if(H%A==0) printf("%d",c);
else printf("%d",c+1);
return 0;
}