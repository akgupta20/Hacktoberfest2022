#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int size)
{
    for (int i = 0;i < size - 1;i++)
    {
        for (int j = 0;j < size - i - 1;j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    bubble_sort(arr, n);
/*
        {
         Best case Time complexity  : O(n*n) // we can optimize best case complexity by using a flag varriable and then o(n).
         Worst case Time complexity : O(n*n)

        Auxiliary space complexity : O(1)
        }
*/
    for (int i = 0;i < n;i++)
        cout << arr[i];
    return 0;
}