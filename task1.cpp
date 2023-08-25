#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
void main() {
	int nb = rand();
	int input_nb;
	int tryy = 0;
	cout << " Try to guess the number: ";
	do {
		cin >> input_nb;
		if(input_nb <nb)cout << "Your guess is too low, try again: ";
		if(input_nb >nb) cout << "Your guess is too high, try again: ";
		tryy++;
	} while (input_nb != nb);
	cout << "You guessed it in "<<tryy<<" tries! The answer is " << a;
}