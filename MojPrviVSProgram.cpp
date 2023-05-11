#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string* ucenici = new string[n];
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, ucenici[i]);
	}
	sort(ucenici, ucenici + n);
	fstream datoteka;
	datoteka.open("imenik.txt", ios::app);
	for (int i = 0; i < n; i++)
		datoteka << ucenici[i] << endl;
	datoteka.close();
	return 0;
}
