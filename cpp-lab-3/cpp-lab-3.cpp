#include <iostream>
#include <cmath>
using namespace std;


int differentsum(const int arr[], int index, const int n, int summ, int sump)
{
    if (index == n)
        return abs(summ - sump);
    else
    {
        int s1= differentsum(arr, index + 1, n, summ + arr[index], sump);
        int s2 = differentsum(arr, index + 1, n, summ, sump + arr[index]);
        return min(s1,s2);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[32] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    
    cout << differentsum(arr, 0, n, 0, 0 );

}

