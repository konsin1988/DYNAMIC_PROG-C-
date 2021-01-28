#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("An array of numbers is given. The grasshopper jumps eihter to the next square \n"
		"or by the number squares recorded in the current square of the array. \n"
	"Count the number of trajectories that the grasshopper can take from start to finish.\n");
	printf("Enter number of squares on the array: ");	
	int n;
	scanf("%d", &n);
	int A[n+1];
	printf("Enter an array: \n");
	A[0] = 0;
	for(int i = 1; i <= n; ++i)
		scanf("%d", &A[i]);
	int K[n+1];
	K[0] = 0;
	K[1] = 1;
	for(int j=2; j<=n; ++j)
	{
		int count_pred = 0;
		for(int k=0; k<j-1; ++k)
		{
			if (A[k] == j - k)
				count_pred += 1;
		}
		K[j] = K[j-1] + count_pred;
	}
	printf("The number of trajectories grasshopper can move from start to end: %d\n", K[n]);


	return 0;
}
