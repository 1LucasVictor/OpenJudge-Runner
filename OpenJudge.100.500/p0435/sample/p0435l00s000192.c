#include<stdio.h>
#include<math.h>
int main()
{
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
   int num;
   float d;
   scanf("%d",&num);
   scanf("%f",&d);
   float arr[num][2];

   for (int i = 0; i < num; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         scanf("%f",&arr[i][j]);
      }
      
   }
   int count=0;
   for (int i = 0; i < num; i++)
   {
      for (int j = 0; j < 1; j++)
      {
         float check = sqrt( (arr[i][j] * arr[i][j]) + (arr[i][j+1] * arr[i][j+1]) );
         // printf(" %d %d %d \n",arr[i][j],arr[i][j+1],check);
         if(d >= check)
         {
            count++;
         }
      }
      

   }
   printf("%d\n",count);
   

   
}