#include<iostream>
#include<time.h>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
};

int main()
{
	srand(unsigned(time(0)));
	const int size = 10;
	int arr[size];
	int min = 0;
	int max = 0;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		if (min > arr[i] || min == 0)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
}