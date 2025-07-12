#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 4
	char C;
	string S, S0;
	cout << "Enter C: ";
	cin >> C;
	cout << "Enter S: ";
	cin.ignore();
	getline(cin, S);
	cout << "Enter S0: ";
	getline(cin, S0);
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == C)
		{
			S.insert(i, " " + S0);
			i += S0.length() + 1;
		}
	}
	cout << "Result: " << S << endl;
}