#include <iostream>
#include <vector>
using namespace std;

void move_zeros_to_front(vector<int>& v) {
    int n = v.size();
    int zero_count = 0;

    // menghitung jumlah nilai 0 dalam vektor
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            zero_count++;
        }
    }

    // memindahkan nilai bukan 0 ke akhir vektor
    int j = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] != 0) {
            v[j] = v[i];
            j--;
        }
    }

    // mengisi nilai 0 pada awal vektor
    for (int i = 0; i < zero_count; i++) {
        v[i] = 0;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 0, 4, 5, 0, 0};

    move_zeros_to_front(v);

    // mencetak vektor hasil
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}