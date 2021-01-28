#include <stdio.h>
#include <time.h>

int fib(int n)
{
	int Fib;
	int Fib_ex2 = 0;
	int Fib_ex1 = 1;
	for(int i = 1; i<n; ++i){
		Fib = Fib_ex2 + Fib_ex1;
		Fib_ex2 = Fib_ex1;
		Fib_ex1 = Fib;
		printf("Fib(n = %02d) - *%7d*\n", i+1, Fib);
	}
	printf("\n");
	return Fib;
}	

int main(int argc, char* argv[])
{
	int N;
	printf("Enter number of fibonachi numbers: ");
	scanf("%d", &N);
	printf("\n");
	printf("Result (n = %2d)\t =\t%d\n", N, fib(N));
	return 0;
}
