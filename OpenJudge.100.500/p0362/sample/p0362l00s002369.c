#include <stdio.h>

int a,b,c;

main(){
scanf("%d%d%d",&a,&b,&c);

if(a<b && b<c){
printf("Yes\n");
}else{
printf("No\n");
}
}