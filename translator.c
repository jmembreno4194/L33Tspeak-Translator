#include <stdio.h>
#include <string.h>

#define TWO_ROWS 2
#define SEVEN_COLUMNS 7
#define LONGEST_STRING 4

int main()
{
	char mappings[TWO_ROWS][SEVEN_COLUMNS][LONGEST_STRING] =
	{
		{"|", "(V)", "(\\)", "\\/", "\\//"},
		{"4", "6", "3", "1", "0", "5", "7"}
	};
	char *I = mappings[0][0], *M = mappings[0][1], *N = mappings[0][2], *V = mappings[0][3], *W = mappings[0][4];
	char *A = mappings[1][0], *B = mappings[1][1], *E = mappings[1][2], *L = mappings[1][3], *O = mappings[1][4], *S = mappings[1][5], *T = mappings[0][6];
	char *string;
	int index = 0;

	printf("Input a string: ");
	fgets(string, 100, stdin);

	for (int i = 0; i < strlen(string); i++)
	{
		switch(string[index++])
		{
			case 'A':
				printf("Detected");
				break;

			case 'a':
				printf("Detected");
				break;
		}
	}
	printf("The end!");
}
