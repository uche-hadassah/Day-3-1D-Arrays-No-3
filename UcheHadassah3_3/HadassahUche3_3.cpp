/*Name:Uche Hadassah
This program reads in two lists of positive integers and checks if they're identical or not*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int List1[MAX];
	int List2[MAX];
	int i = 0;
	int j = 0;
	cout << "Enter List 1(-1 to finish):";
	do
	{
		cin >> List1[i];
		if (List1[i] == -1)
		{
			break;
		}
		i++;
	} while (List1[i] != -1);
	cout << "Enter List 2(-1 to finish):";
	do
	{
		cin >> List2[j];
		if (List2[j] == -1)
		{
			break;
		}
		j++;
	} while (List2[j] != -1);
	if (i != j)//If their lengths are different
	{
		cout << "They are not identical";
	}
	else
	{
		int k = 0;
		while(k < i)
		{
			if (List1[k] != List2[k])//The moment it spots a difference it ends the loop
			{
				cout << "They are not identical";
				break;
			}
			k++;//If it doesnt spot a difference, it repeats the loop again
		}
		//If no difference was spotted in the while loop,it compares the last element in the two arrays. They are bound to be the same
		if (List1[k] == List2[k])
		{
			cout << "They are identical";
		}
	}
	return 0;
}