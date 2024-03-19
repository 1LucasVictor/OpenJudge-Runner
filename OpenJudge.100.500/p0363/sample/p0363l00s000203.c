#include <stdio.h>

main(){
	int a[3];
	int x,y,z;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	y=0;
	while(y<3){
		x=0;
		while(x<3){
			if(a[y]<a[x]){
				z=a[y];
				a[y]=a[x];
				a[x]=z;
			}
			x++;
		}
		y++;
	}

	printf("%d %d %d\n",a[0],a[1],a[2]);


	return 0;
}