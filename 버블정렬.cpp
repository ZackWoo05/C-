#include <iostream>
using namespace std;
int arr[100], n;
void print() {
    for (int i = 0; i < n; i ++ ){
        cout << arr[i] << ' ';
    }
    cout << "\n";
}
void change(int a, int b) {
    int num;
    num = arr[a];
    arr[a] = arr[b];
    arr[b] = num;
}
void sort() {
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1] && i<=n-2) change(i, i + 1);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        sort();
        print();
    }
}