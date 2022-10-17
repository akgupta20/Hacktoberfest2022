#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int left_index, int mid_index, int right_index)
{
    int l1 = mid_index - left_index + 1, l2 = right_index - (mid_index + 1) + 1;
    int temp1[l1 + 1], temp2[l2 + 1];
    for (int i = 0;i < l1;i++)
        temp1[i] = a[left_index + i];
    for (int i = 0;i < l2;i++)
        temp2[i] = a[mid_index + 1 + i];
    temp2[l2] = temp1[l1] = INT_MAX;
    int l_i = 0, r_i = 0;

    for (int i = left_index;i <= right_index;i++)
    {
        if (temp1[l_i] <= temp2[r_i])
        {
            a[i] = temp1[l_i];
            l_i++;
        }
        else {
            a[i] = temp2[r_i];
            r_i++;
        }
    }
    return;
}


void merge_sort(int a[], int left_index, int right_index)
{
    if (left_index == right_index)
        return;
    int mid_index = (left_index + right_index) / 2;
    merge_sort(a, left_index, mid_index);
    merge_sort(a, mid_index + 1, right_index);
    merge(a, left_index, mid_index, right_index);

}

int main() {
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    merge_sort(arr, 0, n - 1);

    /*
            {
             Best case Time complexity  : O(n*log(n)) 
             Worst case Time complexity : O(n*log(n))

             Auxiliary space complexity : O(n)

            }
    */

    for (int i = 0;i < n;i++)
        cout << arr[i] << " ";
    return 0;
}
