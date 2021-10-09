//weird_algorithm.c, copyright Lauri K. Friberg 2021
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
int64_t ask_for_number();
int64_t apply_weird_algorithm_to_number(int64_t number);
int main()
{
	int64_t input_number=0;
	input_number=ask_for_number();
	apply_weird_algorithm_to_number(input_number);
return 0;
}
int64_t ask_for_number()
{
	int64_t input_number=0;
	do {
		printf("Give an integer number (1 =< n =< 1000000): ");
		scanf("%ld", &input_number);
		if (input_number==0) { fprintf(stderr, "\nInvalid input. Exiting.\n"); exit(1); }
		else if (input_number==EOF) { fprintf(stderr, "\nEOT given. Exiting.\n"); exit(1); }
	} while (input_number < 1 || input_number > 1000000);
	return input_number;
}
int64_t apply_weird_algorithm_to_number(int64_t number)
{
	printf("%ld ", number);
	while (number > 1) {
		if ((number % 2)==0) { number=number/2; printf("%ld ", number); }
		else { number = number * 3 + 1; printf("%ld ", number); }
	}
	printf("\n");
	return 0;
}
