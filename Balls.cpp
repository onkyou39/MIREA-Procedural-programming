#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) return  n * factorial(n - 1);
    else return n;
}

int Mis(bool select[], int n, int step = 0) {
    int count = 0;
    if (step >= n) {
        count = 1;
    }
    else {
        for (int i = 0; i < n; i++) {
            if ((i != step) and !select[i]) {
                select[i] = 1;
                count += Mis(select, n, step + 1);
                select[i] = 0;
            }
        }
    }

    return count;
}

int main() {
    const int N = 10;
    bool select[N];
    cout << factorial(N) - Mis(select, N) << endl;

}
