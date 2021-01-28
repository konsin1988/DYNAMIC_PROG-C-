#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	printf("The hero of a computer game needs to move \n" 
		"from one edge of the screen to another, jumping across platforms. \n" 
		"In this case, when jumping from one platform to the next, \n" 
		"the hero leaves | y2-y1 | units of energy, where y1 and y2 \n" 
		"are the heights at which these platforms are located. \n" 
		"In addition, the hero has a super move that allows you \n"
		"to jump over the platform, but this takes 3 * | y3-y1 | units of energy. \n" 
		"Of course, energy should be used as economically as possible. \n\n" 
		"You know the heights of all platforms in order from left to right. \n"
		"It is necessary to find the minimum amount of energy required for the hero \n"
		"to get from the first platform to the last.\n\n");
	printf("Enter the number of platforms: ");
	
	int n;
	int abs(int);
	scanf("%d", &n);
	int E[n+1];
	printf("Enter the energy level of each platform: \n");
	for(int i =0; i< n; ++i)
		scanf("%d", &E[i]);
	int K[n+1];
	K[0] = 0;
	K[1] = abs(E[1] - E[0]);
	for(int j=2; j<n; ++j)
	{
		if(abs(E[j] - E[j-1]) + K[j-1] < 3 * abs(E[j] - E[j-2]) + K[j-2])
		{
			K[j] = abs(E[j] - E[j-1]) + K[j-1];
		}
		else
		{
			K[j] = 3 * abs(E[j] - E[j-2]) + K[j-2];
		}
	}
	printf("The minimum level of energy needed: %d\n", K[n-1]);
	return 0;
}
