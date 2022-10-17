#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[], int size)
{
    for (int i = 0;i < size - 1;i++)
    {
        for (int j = i + 1;j < size;j++)
        {
            if (a[i] > a[j])
                swap(a[j], a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    selection_sort(arr, n);

/*
    {
     Best case Time complexity  : O(n*n)
     Worst case Time complexity : O(n*n)

     Auxiliary space complexity : O(1)
    }
*/

    for (int i = 0;i < n;i++)
        cout << arr[i];
    return 0;
}
