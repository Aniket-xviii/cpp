#include <iostream>
#include <set>

using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout<<i<<">"<<" enter element of array:-";
        cin >> arr[i-1];
    }

    set<int> s(arr, arr + n);

    int i = 0;
    for(int x : s) {
        arr[i] = x;
        i++;
    }
    
    cout << "Array after deleting duplicates: ";
    for(int i = 0; i < s.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}