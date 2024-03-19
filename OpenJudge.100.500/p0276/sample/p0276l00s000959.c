#include<stdio.h>

int main()
{

  int Matrix[101][101],List[101],i,j,number_of_node,k,n;

  scanf("%d",&number_of_node);
  for(j =1; j <=number_of_node ; j++ )List[j] = 0;
  for(i = 1 ; i <=100 ; i++) for(j = 1; j<= 100 ; j++) Matrix[i][j] =0;
    
  for(i = 1 ; i <= number_of_node ; i++ )
    {
      scanf("%d %d",&n,&k);
      for(j = 1; j <=k ; j++)scanf("%d",&List[j]);
      for(j = 1; j<= k ; j++)
        {
          //printf("i = %d List[%d] = %d\n",i,j,List[j]);
          Matrix[i][List[j]] = 1;
        }
    }
  
  for(i = 1; i <= number_of_node ; i++)
    {
      //printf(" i = %d :  ",i);
      for(j = 1 ; j <= number_of_node ; j++)
        if( j == number_of_node)
          {
            printf("%d\n",Matrix[i][j]);
          }
        else printf("%d ",Matrix[i][j]);
    }


  
}
