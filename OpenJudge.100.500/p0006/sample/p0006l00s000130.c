#include <stdio.h>

int main(){
int n,i,kari,ri;
kari=100000;
scanf("%d",&n);
for(i=0;i<n;i++){
ri=kari*5;
ri=ri/100;
kari=kari+ri;
if(kari%1000>0){
kari=kari/1000;
kari++;
kari=kari*1000;
}

}
printf("%d\n",kari);

return 0;
}