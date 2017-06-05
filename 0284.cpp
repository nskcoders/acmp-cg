#include <iostream>

using namespace std;

int n, m, i, j;
int main() {
    cin >> n;
    int a[n];
    for (; i < n; i++) cin >> a[i];

    cin >> m;
    while (m--) {
        cin >> i >> j;
        for (int k = i-1; k < j; k++) cout << ' ' << a[k];
        cout << endl;
    }
}
