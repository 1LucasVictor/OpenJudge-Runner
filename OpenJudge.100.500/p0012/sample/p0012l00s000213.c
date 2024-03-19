#include <stdio.h>

int main(){
int a[101];
int i;
i=1;
a[1]=1;
while(scanf("%d",&a[i])!=EOF){
if(a[i]==0){
i--;
printf("%d\n",a[i]);
a[i]=0;
continue;
}
i++;
}

return 0;
}