#include <iostream>
using namespace std;
int main()
{
	//int i1;
	//cin >> i1;
	//for (int i = 0; i < i1; i++)
	//{
	//	for (int j = 0; j < i1; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout<<endl;
	//}

	//cout << endl << endl << endl;

	//int i2;
	//cin >> i2;

	//for (int i = 0; i < i2; i++)
	//{
	//	for (int j = 0; j < i2; j++)
	//	{
	//		if (i==0||i==i2-1)
	//		{
	//			cout << "*";
	//		}
	//		else if(j==0||j==i2-1) {
	//			cout << "*";
	//		}
	//		else {
	//			cout << " ";
	//		}
	//	}
	//	cout << endl;
	//}

	//int i3;
	//cin >> i3;
	//for (int i = 0; i < i3; i++)
	//{
	//	for (int j = 0; j < i3; j++)
	//	{
	//		if (i == 0 || i == i3-1 || i ==(i3-1)/2)
	//		{
	//			cout << "*";
	//		}
	//		else if (j == 0 || j == i3-1 || j== (i3 - 1) / 2) {
	//			cout << "*";
	//		}
	//		else {
	//			cout << " ";
	//		}
	//	}
	//	cout << endl;
	//}





	int i4;
	cin >> i4;
	for (int i = 0; i < i4; i++)
	{
		for (int j = 0; j < i4; j++)
		{
			if (i == 0 || i == i4 - 1 )
			{
				cout << "*";
			}
			else if (i % 7 == 0 || j % 7 == 0) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}



}

