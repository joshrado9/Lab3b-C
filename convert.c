#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(int argc, char ** argv)
{
	char base_digits[25] = {'0', '1', '2', '3', '4', '5', '6', '7',
				'8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
				'O'};
	
	if (argc < 4)
	{
		printf("Usage:  convert <basefrom> <baseto> <number>\n");
		exit(1);
	}
	int basefrom = atoi(argv[1]);
	int baseto = atoi(argv[2]);
	long int number = atoi(argv[3]);
	int numberbaseten = 0;
	int numberbaseto = 0;
	
	printf("Number read in base %d: %d\n", basefrom, number);
	
	//Convert to base ten

	int converted_number_ten[100];
	int index = 0;
	while (number != 0)
	{
		converted_number_ten[index] = number % 10;
		number = number / 10;
		index ++;
	}
	
	
	printf("Converted to base 10: %d\n", numberbaseten);

	//Convert Number to desired base

	int converted_number[100];
	index = 0;
	while (number != 0)
	{
		converted_number[index] = number % baseto;
		number = number / base;
		index ++;
	}


	printf("Converted to base %d: %d\n", baseto, numberbaseto);
}
