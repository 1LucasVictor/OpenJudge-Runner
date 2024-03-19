int n;
int q;
int loop0;
char name[100001][11];
int time[100001];

void queue(void){

	int curr = 0;
	int elapsedTime = 0;
	int end = n;
	int flag = 1;

	while(flag){
		if( time[curr] - q <= 0 ){
			//???????????????
			elapsedTime += time[curr];
			printf("%s %d\n", name[curr] ,elapsedTime );
			if((end-1) == curr)
				break;
		}else{
			// ??????????????????????????£???
			elapsedTime += q;
			strcpy( name[end], name[curr]);
			time[end] = time[curr] - q;
			end++;
		}
		curr++;
	}
}

int main(int argc, char const *argv[])
{
	scanf("%d %d", &n, &q);

	for (loop0 = 0; loop0 < n; ++loop0)
	{
		scanf("%s %d", name[loop0], time+loop0);
	}

	queue();

//	printf("========== END!! (^o^)/ ==========\n");

	return 0;
}