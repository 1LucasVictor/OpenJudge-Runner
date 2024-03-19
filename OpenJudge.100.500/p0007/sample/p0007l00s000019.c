#include<stdio.h>
#include<string.h>
#include<math.h>
  
  
      
int main(){
 

int i,j,r,k,n,count;

while(scanf("%d",&n)!=EOF){
	count=0;
for(i=0;i<10;i++)
	for(j=0;j<10;j++)
		for(r=0;r<10;r++)
			for(k=0;k<10;k++)
				if(n==i+j+k+r)count++;

printf("%d\n",count);

}

    return 0;
}