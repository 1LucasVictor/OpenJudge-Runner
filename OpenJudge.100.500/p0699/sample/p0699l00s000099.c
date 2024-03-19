#include<stdio.h>
int main(){
int p , q ,r;
scanf("%d %d %d",&p,&q,&r);

if(p==5&&q==7&&r==5||p==5&&q==5&&r==7||p==7&&q==5&&r==5){
    printf("YES");
}
else {printf("NO");}

return 0;
}
