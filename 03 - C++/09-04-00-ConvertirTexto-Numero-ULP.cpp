#include <iostream>

using namespace std;

int main() {
	// Convertir cadena a numero, function stoi
	// stoi - string to int
	string a = "10", b = "20";
	cout << a + b << endl;
	int c = stoi(a) + stoi(b);
	cout << c << endl;
	
	return 0;
}
