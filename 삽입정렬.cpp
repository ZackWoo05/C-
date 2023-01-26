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
void sort(int num) {
    for (int i = num; i >= 0; i--) {
        if (arr[num] < arr[i]) {
            change(num, i);
            num = i;
        }
    }
    print();
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) sort(i);
}