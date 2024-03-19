#include <stdio.h>

int main(){
int a,i,j,temp,c=0,data[100];
scanf("%d",&a);
for(i=0; i<a; i++)
{
    scanf("%d",&data[i]);
}
for(i=0;i<a;i++)
{
    for(j=a;j>i;j--){
        if(data[j]<data[j-1]){
           temp=data[j];
           data[j]=data[j-1];
           data[j-1]=temp;
	   c++;
        }
    }
printf("%d ",data[i]);
}
printf("\n%d\n",c);
return 0;
}