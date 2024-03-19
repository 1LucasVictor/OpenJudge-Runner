#include <stdio.h>
int main(void){
 int x,a,b;
 scanf("%d %d %d",&x,&a,&b);
 if(x<b-a) printf("dangerous");
 else if(b-a>0) printf("safe");
 else printf("delicious");
 return 0;
}
