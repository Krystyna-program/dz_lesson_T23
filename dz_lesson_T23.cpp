#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 4
	//char C;
	//string S, S0;
	//cout << "Enter C: ";
	//cin >> C;
	//cout << "Enter S: ";
	//cin.ignore();
	//getline(cin, S);
	//cout << "Enter S0: ";
	//getline(cin, S0);
	//for (int i = 0; i < S.length(); i++)
	//{
	//	if (S[i] == C)
	//	{
	//		S.insert(i, " " + S0);
	//		i += S0.length() + 1;
	//	}
	//}
	//cout << "Result: " << S << endl;

	// 5
	//char C;
	//string S, S0;
	//cout << "Enter C: ";
	//cin >> C;
	//cout << "Enter S: ";
	//cin.ignore();
	//getline(cin, S);
	//cout << "Enter S0: ";
	//getline(cin, S0);
	//for (int i = 0; i < S.length(); i++)
	//{
	//	if (S[i] == C)
	//	{
	//		S.insert(i + 1, S0);
	//		i += S0.length(); 
	//	}
	//}
	//cout << "Result: " << S << endl;

	// 7
	//string S, S0;
	//cout << "Enter text: ";
	//getline(cin, S);
	//cout << "Enter word: ";
	//cin >> S0;
	//int count = 0;
	//int pos = 0;
	//while (true)
	//{
	//	pos = S.find(S0, pos);
	//	if (pos == -1)
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		count++;
	//		pos += S0.length(); 
	//	}
	//}
	//cout << "Amount: " << count << endl;

	// 8
	//string S, S0;
	//cout << "Enter text: ";
	//getline(cin, S);
	//cout << "Enter word: ";
	//cin >> S0;
	//int pos = S.find(S0);
	//if (pos != -1)
	//{
	//	S.erase(pos, S0.length()); 
	//}
	//cout << S << endl;
	
	// 10
	//string S, S1, S2;
	//cout << "Enter text: ";
	//getline(cin, S);
	//cout << "Enter word S1: ";
	//cin >> S1;
	//cout << "Enter word S2: ";
	//cin >> S2;
	//int pos = S.find(S1); 
	//if (pos != -1)
	//{
	//	S.replace(pos, S1.length(), S2);  
	//}
	//cout << "Result: " << S << endl;

	// 11
	//string S, S1, S2;
	//cout << "Enter text: ";
	//getline(cin, S);
	//cout << "Enter word S1: ";
	//cin >> S1;
	//cout << "Enter word S2: ";
	//cin >> S2;
	//int pos = S.find(S1);
	//while (pos != -1)
	//{
	//	S.replace(pos, S1.length(), S2);
	//	pos = S.find(S1, pos + S2.length());
	//}
	//cout << "Result: " << S << endl;

	// 12
	//string C;
	//cout << "Enter text: ";
	//getline(cin, C);
	//string even = "", odd = "";
	//for (int i = 0; i < C.length(); i++)
	//{
	//	if ((i + 1) % 2 == 0)  
	//		even += C[i];
	//	else                  
	//		odd += C[i];
	//}
	//string reversedOdd = "";
	//for (int i = odd.length() - 1; i >= 0; i--)
	//{
	//	reversedOdd += odd[i];
	//}
	//string result = even + reversedOdd;
	//cout << "Result: " << result << endl;

	// 13
	string C;
	cout << "Enter text: ";
	getline(cin, C);
	int n = C.length();
	int mid = (n + 1) / 2;
	string even = "", odd = "";
	for (int i = 0; i < mid; i++)
	{
		even += C[i];
	}
	for (int i = n - 1; i >= mid; i--)
	{
		odd += C[i];
	}
	string result = "";
	int i = 0, j = 0;
	while (i < odd.length() || j < even.length())
	{
		if (i < odd.length())
		{
			result += odd[i]; 
			i++;              
		}
		if (j < even.length())
		{
			result += even[j];
			j++;
		}
	}
	cout << "Result: " << result << endl;

}