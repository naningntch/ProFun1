#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	for(int i=x.length(); i>0; i--)
	{
		cout << x[i-1];
	}
	return 0;
}
