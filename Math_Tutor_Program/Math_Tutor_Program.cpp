// This program generates random numbers, 
// an equation using the numbers, and 
// pauses to allow the user to attempt to solve 
// before displaying the correct answer.
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);
	int num1 = dist(gen);
	int num2 = dist(gen);
	int solu = num1 + num2; // solution to the random equation
	int answ; // allows user to input their answer
	cout << "What is " << num1 << " + " << num2 << "?" << endl;
	cout << "Take a moment to solve the equation, and type your answer when ready." << endl;
	cin >> answ;
	cout << "Your answer: " << setw(6) << answ << endl;
	cout << "Correct answer: " << setw(3) <<solu;
	
	return 0;
}