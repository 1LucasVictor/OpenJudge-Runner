#include<stdio.h>
int main(){

    int n,m;

scanf("%d",&n);
if(n%2==1){
    m=n/2;
    m+=1;
    printf("%d\n",m);
}
else{
    m=n/2;
    printf("%d\n",m);
}

return 0;
}
