#include<stdio.h>
#define SIZE 100
int FindEvenNumbers(int list[],int even[]);
int main()
{
 extern int list[100];
 extern int even[100];
 extern int count;
 int i;
 int n;
 scanf("%d",&n);
 {
 for(i=0;i<n;i++)
  scanf("%d",&list[i]);
 count=FindEvenNumbers(list,even);
 for(i=0;i<count;i++){
 	if(even[i]%3==0||even[i]%5==0){
 		printf("APPROVED");
 		break;
	 }
	 else{
	 printf("DENIED");
	 break;}
 }

}
 return 0;
}
int FindEvenNumbers(int list[],int even[])
{
 int j,k;
 for(k=0,j=0;j<SIZE;j++)
 if(list[j]%2==0)    
  {
   even[k]=list[j];
  k++;
 }
 return k;
}
int count;
int list[SIZE];
int even[SIZE];