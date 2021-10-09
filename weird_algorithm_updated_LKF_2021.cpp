#include <iostream>
using namespace std;
class weird_algorithm_class
{
private:
	int number;
	int is_even(int ask_if_number_is_even)
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
	cout << "Feed an integer number (bigger than or equal to 1, less than or equal to 1000000): ";
	cin >> number;
	if (number < 1) {
		cout << "Error! The number has to be bigger than or equal to 1 and less than or "
		<< "equal to 1000000!\n";
		exit(1);
	}
	if (number > 1000000) {
		cout << "Error! The number has to be less than or equal to 1000000 and "
		<< "equal to or bigger than 1!\n";
		exit(1);
	}

}
void weird_algorithm_class::display_weird_algorithm_numbers()
{
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
