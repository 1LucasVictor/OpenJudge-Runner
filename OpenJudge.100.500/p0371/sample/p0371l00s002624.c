#include <stdio.h>

int main(){
int n,min = 1000001,max = 0,sum = 0;
int val;

scanf("%d",&n);
while(n != 0){

scanf("%d",&val);

//????¨????
sum += val;

//????°????
if (min > val){
min = val;
}

//?????§???
if (max < val){
max = val;
}
n--;
}

printf("%d %d %d\n",min,max,sum);
return 0;
}