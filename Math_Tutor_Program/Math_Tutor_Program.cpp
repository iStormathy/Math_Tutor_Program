// This program generates random numbers, 
// an equation using the numbers, and 
// pauses to allow the user to attempt to solve 
// before displaying the correct answer.
#include <iostream>
#include <random>
using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);
	int number1 = dist(gen);
	int number2 = dist(gen);
	int solution = number1 + number2;
	int answer;
	cout << "What is " << number1 << " + " << number2 << "?" << endl;
	cout << "Take a moment to solve the equation, and type your answer when ready." << endl;
	cin >> answer;
	cout << "Your answer: " << answer << endl;
	cout << "Correct answer: " << solution;
	
	return 0;
}