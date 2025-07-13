#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isVaildFilesName(string name) {
	if (name.find("\\") != -1 ||
		name.find("/") != -1 ||
		name.find("?") != -1 ||
		name.find("*") != -1 ||
		name.find(":") != -1 ||
		name.find("<") != -1 ||
		name.find(">") != -1 ||
		name.find("|") != -1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

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
	//string C;
	//cout << "Enter text: ";
	//getline(cin, C);
	//int n = C.length();
	//int mid = (n + 1) / 2;
	//string even = "", odd = "";
	//for (int i = 0; i < mid; i++)
	//{
	//	even += C[i];
	//}
	//for (int i = n - 1; i >= mid; i--)
	//{
	//	odd += C[i];
	//}
	//string result = "";
	//int i = 0, j = 0;
	//while (i < odd.length() || j < even.length())
	//{
	//	if (i < odd.length())
	//	{
	//		result += odd[i]; 
	//		i++;              
	//	}
	//	if (j < even.length())
	//	{
	//		result += even[j];
	//		j++;
	//	}
	//}
	//cout << "Result: " << result << endl;

	// 16
	//ifstream Sa("exe 16-1.txt");
	//ifstream Sb("exe 16-2.txt");
	//ifstream Sc("exe 16-3.txt");
	//string SdName;
	//cout << "Enter result file name: ";
	//cin >> SdName;
	//if (!isVaildFilesName(SdName)) {
	//	cout << "Invalid file name!" << endl;
	//}
	//else {
	//	ofstream Sd(SdName);
	//	if (!Sa.is_open() || !Sb.is_open() || !Sc.is_open() || !Sd.is_open()) {
	//		cout << "Error!" << endl;
	//	}
	//	else {
	//		int a, b, c;
	//		while ((Sa >> a) && (Sb >> b) && (Sc >> c)) {
	//			Sd << a << ' ' << b << ' ' << c << ' ';
	//		}
	//		Sa.close();
	//		Sb.close();
	//		Sc.close();
	//		Sd.close();
	//		cout << "File \"" << SdName << "\" successfully created" << endl;
	//	}
	//}

	// 17
	//ifstream inputFile("dates.txt");
	//ofstream daysFile("days.txt");
	//ofstream monthsFile("months.txt");
	//if (!inputFile.is_open() || !daysFile.is_open() || !monthsFile.is_open())
	//{
	//	cout << "Error" << endl;
	//}
	//else
	//{
	//	string line;
	//	while (!inputFile.eof())
	//	{
	//		getline(inputFile, line);
	//		if (line.size() < 10)
	//			continue;
	//		string dayStr = line.substr(0, 2);
	//		string monthStr = line.substr(3, 2);
	//		daysFile << dayStr << " ";
	//		monthsFile << monthStr << " ";
	//	}
	//}
	//inputFile.close();
	//daysFile.close();
	//monthsFile.close();
	//cout << "Files days.txt and months.txt created successfully" << endl;

	// 20
	ifstream fileRead("f.txt");
	ofstream fileWrite("g");
	if (fileRead.is_open() && fileWrite.is_open())
	{
		int choice;
		cout << "Choose output format:" << endl;
		cout << "1) FirstName Patronymic LastName" << endl;
		cout << "2) LastName F.P." << endl;
		cout << "Enter 1 or 2: ";
		cin >> choice;
		if (choice == 1 || choice == 2)
		{
			string lastName, firstName, patronymic;
			while (fileRead >> lastName >> firstName >> patronymic)
			{
				if (choice == 1)
				{
					fileWrite << firstName << " " << patronymic << " " << lastName << endl;
				}
				else
				{
					fileWrite << lastName << " "
						<< firstName[0] << "." << patronymic[0] << "." << endl;
				}
			}
			cout << "Successful result!" << endl;
		}
		else
		{
			cout << "Invalid choice!" << endl;
		}
		fileRead.close();
		fileWrite.close();
	}
	else
	{
		cout << "Error opening file!" << endl;
	}
}