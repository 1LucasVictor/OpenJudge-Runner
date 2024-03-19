#include<stdio.h>
#include<math.h>

main()
{
  int tmp,c,i,j,s[3],n;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
   
      scanf("%d %d %d",&s[0],&s[1],&s[2]);
   
   
      for(c=0;c<3;c++){
	for(j=0;j<2;j++){
	  if(s[j]<s[j+1]){
	    tmp=s[j+1];	 
	    s[j+1]=s[j];
	    s[j]=tmp;
	  }
	}
      }

      if(pow(s[0],2)==pow(s[1],2)+pow(s[2],2)){
	printf("YES\n");
      }else{
	printf("NO\n");
      }

      

    }



  return 0;

}