#include<stdio.h>
#define maxn 1005
int a[maxn];

int main(){
int n,flag=1;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0)
        if(a[i]%3!=0&&a[i]%5!=0)
        {flag=0;break;}
}
if(flag) printf("APPROVED\n");
else printf("DENIED\n");
return 0;
}