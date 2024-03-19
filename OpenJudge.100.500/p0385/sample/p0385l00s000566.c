#include <stdio.h>
int main(){

int x;
while(1){
    scanf("%d",&x);
    if(x==0)break;
    else if(x<100)printf("%d\n",x/10+x%10);
    else if(x<1000)printf("%d\n",x/100+x%10+x/10%10);
    else printf("%d\n",x/1000+x/100%10+x/10%10+x%10);
}

return 0;

}