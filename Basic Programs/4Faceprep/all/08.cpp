// amicable or not
// sum of the proper devisors of each number is the another number

#include <iostream>
using namespace std;
int main()
{
    cout << "enter the two numbers\n";
    int n1, n2;
    cin >> n1 >> n2;
    int sumOfDevisors1ofN1 = 0;
    int sumOfDevisors1ofN2 = 0;

    for (int i = 1; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            sumOfDevisors1ofN1 = sumOfDevisors1ofN1 + i;
        }
    }



    for (int i = 1; i < n2; i++)
    {
        if (n2 % i == 0)
        {
            sumOfDevisors1ofN2 = sumOfDevisors1ofN2 + i;
        }
    }


    cout << sumOfDevisors1ofN1 << " " << sumOfDevisors1ofN2 << endl;



    if (sumOfDevisors1ofN1 == n2 && sumOfDevisors1ofN2 == n1)
        cout << "both are amicable numbers";
    else
        cout << "not amicable";
}