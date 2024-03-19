#include<stdio.h>
long long n[10000];
int main(){
 long long a,min,max,sum=0;
 scanf("%lli",&a);
int i;
for(i=0;i<a;i++){
    scanf("%lli",&n[i]);
    sum += n[i];
}
min = n[0];
max = n[0];
for(int i=0;i<a;i++){
    if(n[i]<min){
        min = n[i];
    }
    if(n[i]>max){
        max = n[i];
    }
}
printf("%lli %lli %lli\n",min,max,sum);

return 0;
}

