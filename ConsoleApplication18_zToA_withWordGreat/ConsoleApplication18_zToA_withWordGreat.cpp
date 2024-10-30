/*  97 to 122 is a to z in ascii*/

#include<stdio.h>

int main(void)
{
	char array1[26];
	short i = 0;
	char series = 97;
	char array2[5];


	for (i = 0; i <26 ; i++)
	{
		
		array1[25 -i] = series;  // array1[25] = 97, array1[24] = 96 ... and so on.
		
		series++;
		
		// printf("%c\n", array1[25 - i]);

	}
	for (int j = 0; j < 26; j++)
	{
		printf("%c\n", array1[j]);
	}

	for (int k = 25; k > 0; k--)
	{
		if (array1[k] == 'g')
		{
			array2[0] = array1[k];
		}
		if (array1[k] == 'r')
		{
			array2[1] = array1[k];
		}
		if (array1[k] == 'e')
		{
			array2[2] = array1[k];
		}
		if (array1[k] == 'a')
		{
			array2[3] = array1[k];
		}
		if (array1[k] == 't')
		{
			array2[4] = array1[k];
		}
	}
	for (short l = 0; l < 5; l++)
	{
		printf("%c", array2[l]);
	}
	return 0;
}