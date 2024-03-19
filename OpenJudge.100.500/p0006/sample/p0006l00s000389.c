#include <stdio.h>
int main(void){
int i,n,s=100000;
scanf("%d",&n);
for(i=0;i<n;i++){
s=s*105/100;
if(s%1000>0)s=(s/1000+1)*1000;

}
printf("%d\n",s);
return 0;
}

