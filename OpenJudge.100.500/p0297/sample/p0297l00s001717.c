#include <stdio.h>

//int rank_of_finished=0

typedef struct
{
  int time; 
  char name[10];
  
}SET_OF_VALUE;
  
int main()
{

  int i,time_of_passed = 0,n,q,order_of_finished[100000],element_of_finished = 0/*time[100000]*/;
  SET_OF_VALUE set[100000];
  //char name[100000][10];

  scanf("%d %d",&n,&q);

  for(i = 0; i<n ; i++) scanf("%s %d",set[i].name,&set[i].time);
  // printf("\n");//test
  while(element_of_finished < n)
    {
      for(i = 0 ; i< n ; i++)
	{
	  if(set[i].time <= 0)continue;
	  if(set[i].time <= q)
	    {
	      time_of_passed += set[i].time;
	      set[i].time = -1*time_of_passed;
	      order_of_finished[element_of_finished] = i;
	      element_of_finished++;
	      continue;
	    }
	  else
	    {
	      set[i].time = set[i].time - q;
	      time_of_passed += q;
	    }

	}
    }

  for(i=0 ; i<n ; i++)
    {
      printf("%s %d\n",set[order_of_finished[i]].name,-1*set[order_of_finished[i]].time);
          }
  

}

