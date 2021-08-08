// amicable or not
// sum of the proper devisors of each number is the another number

#include <iostream>
using namespace std;
int main()
{
    cout << "enter the two numbers\n";
    int n1, n2;
    cin >> n1 >> n2;
    int sumOfDevisors1 = 0;
    int sumOfDevisors2 = 0;

    for (int i = 1; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            sumOfDevisors1 = sumOfDevisors1 + i;
        }
    }



    for (int i = 1; i < n2; i++)
    {
        if (n2 % i == 0)
        {
            sumOfDevisors2 = sumOfDevisors2 + i;
        }
    }


    cout << sumOfDevisors1 << " " << sumOfDevisors2 << endl;



    if (sumOfDevisors1 == n2 && sumOfDevisors2 == n1)
        cout << "both are amicable numbers";
    else
        cout << "not amicable";
}