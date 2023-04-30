#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num;
    double sum = 0.0;
    cout << "Enter the value of n:- ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) 
    {
        if (i % 2 == 0) 
        {
            sum -= 1.0 / pow(i, i);
        } 
        else {
            sum += 1.0 / pow(i, i);
        }
    }
    
    cout << "sum of the first " << num << " terms is: " << sum << endl;
    return 0;
}