#include <iostream>
using namespace std;

int main ()
{
    int arr[100];
    int n, pos, value;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enetr array elements: " << "\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter position to insert element: ";
    cin >> pos;

    cout << "Enter value to enter: ";
    cin >> value;

    if (pos > n || pos < 0) {
        cout << "Invalid";
    }

    for (int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    n++;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}