#include <iostream>
using namespace std;
int arr[100], n;
void change(int a, int b) {
    int num;
    num = arr[a];
    arr[a] = arr[b];
    arr[b] = num;
}
void sort(int num) {
    int min = 101;
    for (int i = num + 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    for (int i = num + 1; i < n; i++) {
        if (arr[i] == min && arr[num]>arr[i]) change(num, i);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << "\n";
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        sort(i);
    }
}