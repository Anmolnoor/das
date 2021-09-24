#include <iostream>
using namespace std;
int find(int x, int A[], int n)
{
    for (int y = 0; y < n; y++)
    {
        if (x == A[y])
        {
            return y;
        }
    }
    return -1;
}
int main()
{
    int A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, num;
    cout << "Enter the number you want to find : ";
    cin >> num;
    int index = find(num, A, 10);
    if (index == -1)
        cout << "Not Found!";
    else
        cout << "Found at : " << index+1;
    return 0;
}