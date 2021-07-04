#include <iostream>
using namespace std;
 
bool findtriplets(int a[], int arr_size , int sum)
{
    for (int i = 0; i < arr_size - 2; i++)
    {
        for (int j = i + 1; j < arr_size - 1; j++)
        {
 
            for (int k = j + 1; k < arr_size; k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                {
                    cout << 1 << endl;
					cout << "Triplet is " << a[i] <<
                        ", " << a[j] << ", " << a[k];
                    return true;
                }
            }
        }
    }
    cout << -1 <<endl;
    return false;
}
int main()
{
    int a[] = { 1, 4, 45, 6, 10, 8 };
    int X = 13;
    int n = 6;
    findtriplets(a, n, X);
    return 0;
}
 
