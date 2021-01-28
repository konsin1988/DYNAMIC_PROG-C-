#include <stdio.h>

int main(int argc, char* argv[])
{
	int N;
	printf("Enter the number of rows: ");
	scanf("%d", &N);
	int A[N+2];
	for(int i=0; i<N+1; ++i)
	{
		int tmp_r = 1;
		for(int j=0; j<i+1; ++j)
		{
			if (j == 0 || j == i) A[j] = 1;
			else 
			{
				int tmp_l = tmp_r;
				tmp_r = A[j];
				A[j] = tmp_l + tmp_r;
			}
			printf(" %3d ", A[j]); 
		}
		printf("\n");
	}

	return 0;
}
