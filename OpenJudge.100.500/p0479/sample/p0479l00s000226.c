#include <stdio.h>

#define NUMBER 300000


int main(void){

        long long int a;
        int b[NUMBER] = {0};
        int count[NUMBER] = {0};

scanf("%lld",&a);                               //社員の人数

for(long long int i=0;i<a-1;i++){
        scanf("%d",&b[i]);              //上司の社員番号
}

for(long long int i=0;i<a;i++){
        for(long long int j=0;j<a-1;j++){
                if(b[j] == i+1){
                        count[i]++;
                }   
        }   
        printf("%d\n",count[i]);
}

return 0;
}
