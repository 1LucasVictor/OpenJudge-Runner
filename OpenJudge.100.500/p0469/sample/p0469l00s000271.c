#include <stdio.h>
int main(){
int a,b,k;
int i;
scanf("%d",&k);
scanf("%d %d",&a,&b);
if(a%k == 0||b%k==0)printf("OK");
else if(b-a>=k) printf("OK");
else 
for(i = 0;a <= b;i++){
a++;
if(a % k == 0){ printf("OK");
		break;}
else printf("NG");
     break;
}

}