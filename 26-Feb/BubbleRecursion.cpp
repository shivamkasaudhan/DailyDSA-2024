#include <iostream>
using namespace std;
void print(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortArr(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArr(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 1, 0, 5, 3};
    sortArr(arr, 5);
    print(arr,5);

    return 0;
}