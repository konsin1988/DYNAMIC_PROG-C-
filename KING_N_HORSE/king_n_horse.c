#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	printf("King moves from a1 to h8. On the way he meets the opponent's horse.\n" 
			"We can't go to the squares of the horses attack. Our task is \n"
			"to count the number of options that he can get from one point \n"
			"to anothre.\n");
	printf("Enter the horse's position (example - a5): ");
	char horse[2];
	scanf("%s", &horse);
	int x = horse[0] - 96;
	int y = horse[1] - 48;
	printf("a...h = %d (%c)\nnumber = %d\n", x, horse[0], y);

	int A[10][10];
	for(int i=0; i<10; ++i) {
		A[0][i] = 0;
		A[9][i] = 0;
		A[i][0] = 0;
		A[i][9] = 0;
	}
	A[0][0] = 1;
	for(int i=1; i<9; ++i)
		for(int j=1; j<9; ++j)
		{
			if((j == y && i == x) || ((j == y + 1 || j == y - 1) && (i == x + 2 || i == x - 2)) || ((j == y + 2 || j == y - 2) && (i == x + 1 || i == x - 1)))
				A[i][j] = 0;
			else A[i][j] = A[i-1][j] + A[i][j-1] + A[i-1][j-1];
		}
	printf("The number of options is %d.\n", A[8][8]);


	return 0;
}
