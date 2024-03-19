#include <stdio.h>



int main(){

	

        int m,n;

	

	int a,b,c;

	

	scanf("%d %d",&m,&n);

	

	int large[m][n];

	

	int small[n];

	

	/*

	printf("%d %d\n",n,m); ここはおk

	*/



	for(a=0;a<=m-1;a++){

	  /*

		scanf("%*c");

	  */	

	  /*

		printf("a=%d\n",a);

		*/



		for(b=0;b<=n-1;b++){

			

			scanf("%*c%d",&large[a][b]);



			/*

			printf("large[%d][%d]=%d\n",a,b,large[a][b]);

			printf("b=%d\n",b);

			*/



		}



		

		

	}

	

	/*

	printf("large end!\n");

	*/



	for(c=0;c<=n-1;c++){

		

		scanf("%*c%d",&small[c]);

		

	}

	

	int d,e;

	

	int answer[m];

	

	for(d=0;d<=m-1;d++){

		

		answer[d]=0;

		

		for(e=0;e<=n-1;e++){

			

			answer[d]+=large[d][e]*small[e];

			

		}

		

	}

	

	int f;

	

	for(f=0;f<=m-1;f++){

		

		printf("%d\n",answer[f]);

		

	}



	return 0;

	

}