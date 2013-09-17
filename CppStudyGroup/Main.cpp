#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	char buzz = '#';
	
	string name;
	cout << "What is your name ? " << endl;
	cin >> name;
	const string greeting = " Hello " + name + "! ";

	// build first and last line
	const string spaces(greeting.size(),' ');
	const string header(spaces.size(), buzz);
	

	cout << header << endl;
	cout << spaces << endl;
	cout << greeting << endl;
	cout << spaces << endl;
	cout << header << endl;

	//const string hello = "Hello";
	//const string exclam = "!";
	//const string msg = hello + ", world " + exclam;
	//cout << msg << endl;
	

	

	return 0;
}
