#include <stdio.h>


int main(int argc, char* argv[])
{
	int N;
	printf("Enter the max number: ");
	scanf("%d", &N);
	int sieve[N+1];
	for(int n=0; n<=N; ++n) sieve[n] = 0;

	for(int i = 2; i*i <= N; ++i)
		if (sieve[i] == 0)
			for(int k = i*i; k <= N; k += i)
				sieve[k] = 1;
	printf("Simple numbers: \n");
	for (int i=2; i<=N; ++i)
		if (sieve[i] == 0)
			printf("%d ", i);
	printf("\n");
	
	return 0;
}
