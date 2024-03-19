#include<stdio.h>
#include<math.h>
int main(void){
        int a,b,out;
        while(scanf("%d %d",&a,&b)!=EOF){
                if(a+b==0){
                        out=0;
                }else{
                        out=(int)(log10(a+b)+1);
                }
                printf("%d\n",out);
        }
        return 0;
}