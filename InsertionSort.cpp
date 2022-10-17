#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size;i++)
    {
        int key = a[i], j = i - 1;
        while (j >= 0 and key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[++j] = key;
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    insertion_sort(arr, n);
    
/*
        {
         Best case Time complexity  : O(n) // we can optimize best case complexity by using a flag varriable and then o(n).
         Worst case Time complexity : O(n*n)

         Auxiliary space complexity : O(1)

        }
*/
    
    for (int i = 0;i < n;i++)
        cout << arr[i];
    return 0;
}
