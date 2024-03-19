#include <stdio.h>
#include <math.h>

int sosuu(int );

int false=0,true=1,x[10000],i=3,count=0,n,m;

int main()
{

scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&x[i]);
}

for(i=0;i<n;i++){
m=sosuu(x[i]);
count+=m;
}

printf("%d\n",count);

return 0;
}

int sosuu(int x){ 
if(x==2){
return true;
}

if(x<2 && x%2==0){
return false;
}

while(i<=sqrt(x)){
if(x%i==0){
return false;
i=i+2;
}
}

return true;

}