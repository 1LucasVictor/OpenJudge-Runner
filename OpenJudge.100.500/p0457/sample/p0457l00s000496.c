#include<stdio.h>
 int main()
 {
 	int n,m,k;
 	scanf("%d%d%d",&n,&m,&k);
 	int a[n],b[m],i,c[n+m];
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<m;i++)
 	scanf("%d",&b[i]);
 	int sum=0,j=0,h=0,z=0;
 	while(j<n&&h<m)
 	{
 		if(a[j]<=b[h])
 		{
 			c[z++]=a[j];
 			j++;
		 }
 		else
 		{
 			c[z++]=b[h];
 			h++;
		 }
	 }
	 while(j<n)
	 {
	 	c[z++]=a[j];
 			j++;
	 }
	 while(h<m)
	 {
	 	c[z++]=b[h];
 			h++;
	 }
	 /*for(i=0;i<z;i++)
	 printf("%d  ",c[i]);*/
	 if(c[0]==k)printf("1\n");
	// if(c[0]>k)printf("0\n");
	 else
	 {
	 	for(i=0;i<z;i++)
	    {
	 	   
	 	   sum+=c[i];
	 	   if(sum>k)break;
	    } 
	  printf("%d\n",i);
	 }
	 
 }