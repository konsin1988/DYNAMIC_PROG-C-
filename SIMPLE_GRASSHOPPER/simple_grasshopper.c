#include <stdio.h>

int number_of_traject(int n);

int main(int argc, char* argv[])
{
	int finish;
	printf("Grasshopper can move only forward by 1 or by 2 squares. \n"
			"Count the number of trajectories he can move from start to enter. \n"
			"\nEnter the number of squares: ");
	scanf("%d", &finish);
	printf("Grasshopper has %d trajectories from 1 to %d\n", number_of_traject(finish), finish);	

	return 0;
}

int number_of_traject (int n)
{
	int k_ex2 = 0;
	int k_ex1 = 1;
	int k;
	for(int i = 2; i<n+1; ++i)
	{
		k = k_ex2 + k_ex1;
		k_ex2 = k_ex1;
		k_ex1 = k;
	}
	return k;
}
