#include <stdio.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	int max=0,maxi,min=1000000000,mini,a[n];
	int karimin=1000000000,karimax=0,kariminmin=-1000000000;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
		if(max<a[i]){
			maxi=i;
			max=a[i];
		}
		if(min>a[i]){
			mini=i;
			min=a[i];
		}
	}
	//printf("max:min%d:%d",max,min);
	
	for(i=0;i<maxi;i++){
		if(karimin>a[i]){
			karimin=a[i];
		}
	}
	//printf("kmax:%d\nkmin:%d\n",karimax,karimin);
	
	karimin=max-karimin;
	
	for(i=mini+1;i<n;i++){
			if(karimax<a[i]){
			karimax=a[i];
			}
	}
	//printf("kmax:%d\nkmin:%d\n",karimax,karimin);
	
	karimax=karimax-min;
	
	//sprintf("kmax:%d\nkmin:%d\n",karimax,karimin);
	//printf("%d%d:%d%d",min,a[n-1],max,a[0]);
	
	if(mini!=n-1||maxi!=0){
		if(karimax>karimin){
			printf("%d\n",karimax);
		}else{
			printf("%d\n",karimin);
		}
	}else{
		karimax=0;
		karimin=-1000000000;
		int f=0;
		for(i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				if(karimax<a[i+1]-a[i]){
					karimax=a[i+1]-a[i];
				}
				f=1;
			}else{
				if(karimin<a[i+1]-a[i]){
					karimin=a[i+1]-a[i];
				}
				//rintf("%d\n",karimin);
			}
		}
		if(karimax>0){
			printf("%d\n",karimax);
		}else if(f==0){
			printf("%d\n",karimin);
		}
		else{
		karimax=0;
		for(i=0;i<n-1;i++){
			if(kariminmin<-a[i]+min){
				kariminmin=-a[i]+min;
			}
		}
		
		
		printf("%d\n",kariminmin);
		
		}
	}
	
	
}