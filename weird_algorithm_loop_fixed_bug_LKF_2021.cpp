//copyright L.K.F. 2021 looping bugfixed weird algorithm, operates on numbers, C++
#include <cstddef>
#include <iostream>
class weird_algorithm_class
{
private:
	long long int number;
	int is_even(long long int ask_if_number_is_even)
	{
	if (ask_if_number_is_even % 2 == 0) // n % 2 is modulo, n/2 remainder, 0 if even and 1 if odd
		{ return(1); } //ask_if_number_is_even number is even, so return 1, TRUE
	return(0); //ask_if_number_is_even number is odd, so return 0, FALSE
	}
public:
	void ask_weird_algorithm_number();
	void display_weird_algorithm_numbers();
};
void weird_algorithm_class::ask_weird_algorithm_number()
{
	using namespace std;
	#define VALID_NUMBER_VALUE 1
	#define INVALID_NUMBER_VALUE 0
	int number_form_validity = INVALID_NUMBER_VALUE;
	do {
		cout << "Feed an integer number (bigger than or equal to 1, less than or equal to 1000000): ";
		cin >> number;
		cin.clear();
		fflush(stdin);
		if (number==0) {
			cerr << "\nInvalid input or 0 or EOF, EOT given (Ctrl+D in Unix-like systems).\n"
				 << "Will exit the program with an error, status 1.\n";
			exit(1);
		}
		else if (number < 1) {
			cin.clear();
			fflush(stdin);
			cout << "Error! The number has to be bigger than or equal to 1 and less than or "
			<< "equal to 1000000!\n";
			number_form_validity = INVALID_NUMBER_VALUE;
		}
		else if (number > 1000000) {
			cin.clear();
			fflush(stdin);
			cout << "Error! The number has to be less than or equal to 1000000 and "
			<< "equal to or bigger than 1!\n";
			number_form_validity = INVALID_NUMBER_VALUE;
			//number = 0;
		}
		else { number_form_validity = VALID_NUMBER_VALUE; }
	} while (number_form_validity == INVALID_NUMBER_VALUE);
}
void weird_algorithm_class::display_weird_algorithm_numbers()
{
	using namespace std;
	cout << number << " ";
	while (number != 1) {
		if (is_even(number)) { number = number / 2; }
		else { number = number * 3 + 1; }
		cout << number << " ";
	}
	cout << endl;
}
int main(void)
{
	weird_algorithm_class weird_algorithm_object;
	weird_algorithm_object.ask_weird_algorithm_number();
	weird_algorithm_object.display_weird_algorithm_numbers();
	return(0);
}
