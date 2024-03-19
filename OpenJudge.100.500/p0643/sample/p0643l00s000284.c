#include<stdio.h>
int syamugame(int a,int b);
int main()
{
      int a;
      int b;
      char str1[10001];
      char str2[10001];

     fgets(str1,sizeof(str1),stdin);
     sscanf(str1,"%d",&a);

    fgets(str2,sizeof(str2),stdin);
   sscanf(str2,"%d",&b);

if(!syamugame(a,b)){
printf("Even");
}
else{
printf("Odd");
}
return 0;
}

int syamugame(int a,int b)
{
if(a*b%2==1){
return 1;
}
return 0;
}
