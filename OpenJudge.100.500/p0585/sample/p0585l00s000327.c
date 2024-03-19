#include<stdio.h>
int main(){
    int a,b,c,i,d=0,count=0,e;
    scanf("%d%d%d",&a,&b,&c);

    for(i=0;;i++){
            d=d+a;
            count++;
        if(d>c){
                break;
        }
    }
      e=b*(count-1);
      printf("%d\n",e);

return 0;
}
