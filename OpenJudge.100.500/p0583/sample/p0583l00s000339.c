#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
long long cmpfunc (const void * a, const void * b) {
   return ( *(long long*)a - *(long long*)b );
}



int main(void){
   
long long int test,i,j,n,count,flag=0,o1=0,o2=0,b1,x,m,l,max,sum2,min,f,c,r,o,d,sum1,sum=0,y,a,b,count1=0,a2,b2;
char k[1000000];
scanf("%lld%lld%lld%lld%lld%s",&n,&a,&b,&c,&d,k);
flag=0;
if(a>b){
    k[c-1]='#';
    for(i=b-1;i<d-2;i++){
        if(k[i+1]=='#'&& k[i+2]=='#'){
            printf("No");
            break;
        }
    }
}else{
     k[d-1]='#';
    for(i=a-1;i<c-2;i++){
        if(k[i+1]=='#'&& k[i+2]=='#'){
            printf("No");
            break;
        }
    }
}
printf("Yes");
return 0;
}
