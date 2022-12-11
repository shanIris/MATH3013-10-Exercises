//Exercise 1
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	cout << "What is your age?"<<'\n';
	int age;
	cin >> age;
	cout << "Your age is " << age <<'\n';
	ofstream file("age.txt");
	file << age;
	return 0;
}

