#include <stdio.h>
int main (void)
{int n,j,a[10000],b[10000],m,i,S;
 S=0;
 scanf("%d",&n);
 for(j=1;j<=n;j++){
 	scanf("%d",&a[j]);
}
 for(i=1;i<n;i++){
 	for(m=1;m<n;m++){
 		if(a[m]>a[m+1]){
 		b[m]=a[m];
 		b[m+1]=a[m+1];
 		a[m]=b[m+1];
 		a[m+1]=b[m];

}

}
 
}
for(i=1;i<=n;i++){
	S=S+a[i];
}
printf("%d %d %d\n",a[1],a[n],S);

return 0;
}