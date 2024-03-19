#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int n,q,i,time2=0,count=0;
  char name[100000][10],name2[100000][10];
  int *time,*time3;

  scanf("%d%d",&n,&q);
  if(n<1 || n>100000) exit(8);
  if(q<1 || q>1000) exit(8);
  //name = malloc(n*sizeof(char *));
  /*for(i=0;i<n;i++)
    {
      name[i]=malloc(10*sizeof(char));
      }*/
  time = (int *)malloc(n*sizeof(int));
  time3 = (int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
    {
      scanf("%s%d",&name[i],&time[i]);
      if(time[i]>50000 || time[i]<1) exit(8);
    }
  i=0;
  while(1)
    {
      if(time[i]==0)
	{
	  i++;
	  if(i == n)
	    {
	      i=0;
	    }
	  continue;
	}
      if(time[i] <=q)
	{
	  //printf("%s\n",name2[i]
	  time2+=time[i];
	  time3[count] = time2;
	  time[i] = 0;
	  strcpy(name2[count],name[i]);
	  count++;
	}
      else {
	//if(time[i] != 0)
	// {
	    time[i] = time[i] - q;
	    time2 += q;
	    //  }
      }
      if(count==n) break;
      i++;
      if(i == n)
	{
	  i=0;
	}
    }
  //printf("\n");
  for(i=0;i<n;i++)
    {
      printf("%s %d\n",name2[i],time3[i]);
    }
 
  return 0;
}

