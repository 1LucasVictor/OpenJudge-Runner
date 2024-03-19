#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int n,a[200005];
int count;
int flag=0;
int count2;
scanf("%d",&n);
for(count=0;count<n;count++){
scanf("%d",&a[count]);
}
for(count=0;count<n;count++){
    for(count2=0;count2<count;count2++){
        if(a[count2]==a[count]){flag=1;break;}
    }
    if(flag==1){break;}
}
if(flag==1){printf("NO");}
else{printf("YES");}
}