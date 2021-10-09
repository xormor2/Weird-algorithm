//weird_algorithm.c, copyright Lauri K. Friberg 2021
#include <stdlib.h>
#include <stdio.h>
long long int ask_for_number();
long long int apply_weird_algorithm_to_number(long long int number);
int main()
{
	long long int input_number=0;
	input_number=ask_for_number();
	apply_weird_algorithm_to_number(input_number);
return 0;
}
long long int ask_for_number()
{
	long long int input_number=0;
	do {
		printf("Give an integer number (1 =< n =< 1000000): ");
		scanf("%lld", &input_number);
		if (input_number==0) { fprintf(stderr, "\nInvalid input. Exiting.\n"); exit(1); }
		else if (input_number==EOF) { fprintf(stderr, "\nEOT given. Exiting.\n"); exit(1); }
	} while (input_number < 1 || input_number > 1000000);
	return input_number;
}
long long int apply_weird_algorithm_to_number(long long int number)
{
	printf("%lld ", number);
	while (number > 1) {
		if ((number % 2)==0) { number=number/2; printf("%lld ", number); }
		else { number = number * 3 + 1; printf("%lld ", number); }
	}
	printf("\n");
	return 0;
}
