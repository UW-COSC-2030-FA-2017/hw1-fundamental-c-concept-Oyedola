// HW 1: Part 1
// Oyedola Ajao 
// COSC 2030 - FALL 2017
// Sept. 18 2017

#include <iostream>

using namespace std;

template <class T>
T Mid (T input1, T input2, T input3)
{
	if (input1 > input2 && input1 < input3)
	{
		return input1;
	}
	else if (input1 < input2 && input1 > input3)
	{
		return input1;
	}
	else if (input1 == input2 == input3)
	{
		return input1;
	}
	else if (input1 > input2 && input3 < input2)
	{
		return input2;
	}
	else if (input1 < input2 && input3 > input2)
	{
		return input2;
	}
	else if (input3 < input1 && input3 > input2)
	{
		return input3;
	}
	else if (input3 > input1 && input3 < input2)
	{
		return input3;
	}
	else if (input1 == input2)
	{
		return input1;
	}
	else if (input2 == input3)
	{
		return input2;
	}
	else if (input1 == input3)
	{
		return input1;
	}
}

int main()
{
	int input1;

	int input2;

	int input3;

	cout << "Please input three integers: ";

	cin >> input1 >> input2 >> input3;

	cout << endl;

	cout << "Here is the middle integer of those three: " << Mid(input1, input2, input3) << endl << endl;

	return 0;
}