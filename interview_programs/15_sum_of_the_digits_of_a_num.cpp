// C++ program to find the sum of digits of a number

# include <iostream>
using namespace std;

int sum_of_digits(int n)
{
	int sum = 0;
while (n != 0)
{
	int r = n%10;
	sum = sum + r;
	n = n/10;
}
	return sum;
}

int main()
{
	int n;
	cout << “\nEnter a number : “;
	cin >> n;
	cout << “\nSum of digits of ” << n << ” is ” << sum_of_digits(n) << endl;
	return 0;
}