#include<stdio.h>
int main(){
int a,b,c,i;
while(scanf("%d%d",&a,&b) != EOF){
c = a + b;


if(c < 10)printf("1\n");
else if(10 <= c && c < 100)printf("2\n");
else if(100 <= c && c < 1000)printf("3\n");
else if(1000 <= c && c < 10000)printf("4\n");
else if(10000 <= c && c < 100000)printf("5\n");
else if(100000 <= c && c < 1000000)printf("6\n");
else if(1000000 <= c)printf("7\n");
}
return 0;
}