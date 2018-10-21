#include<iostream>
#include<string>
using namespace std;
int main()
{
	int arr1[10];
	string arr2[10], x;
	//this for to insert the number frome user
	for (int i = 0; i < 10; i++)
	{
		cout << "enter the number"" ("<< i + 1 <<" ""of 10)\n";
		cin >> arr1[i];
	}
	//this for to change number to the number in written forms
	//and passes result into second array 
	for (int i = 0; i < 10; i++)
	{
			if (arr1[i] == 0)x = "zero";
			if (arr1[i] == 1)x = "one";
			if (arr1[i] == 2)x = "two";
			if (arr1[i] == 3)x = "three";
			if (arr1[i] == 4)x = "four";
			if (arr1[i] == 5)x = "five";
			if (arr1[i] == 6)x = "six";
			if (arr1[i] == 7)x = "siven";
			if (arr1[i] == 8)x = "eight";
			if (arr1[i] == 9)x = "nine";
			arr2[i]=x;
	}
	cout << endl;
	//this for to print result
	for (int i = 0; i < 10; i++)
	cout << arr2[i] << " ";
	cout << endl;
	system("pause");
	return(0);
}
