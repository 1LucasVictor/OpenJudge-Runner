#include<stdio.h>
int main(void)
{
int a,x,i,j,k,v;
while(1){
scanf("%d %d", &a,&x);
if(a==0&&x==0){
break;
}
v == 0;
for(i = 1;  i < a-1;i++){
 for(j = i+1;  j < a;j++){
  for(k = j+1;  k < a+1;k++){
        if(x ==i + j  +  k)
          ++v;

     }
  }
}
}
printf("%d\n",v);
return 0;
}

    