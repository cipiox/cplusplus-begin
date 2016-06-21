#include <iostream>
using namespace std;

int main ()
{
	char ch;
	int i;

	for (i = 1, ch = 97; ch <= 122; ch++, i++)
	{
		if(i%5) cout << ch << "\t";
		else cout << ch << "\n";

	}
	cout << endl;
	return 0;
}