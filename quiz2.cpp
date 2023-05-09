#include <iostream>
#include <vector>
using namespace std;

void freq(vector<int> nums, int target) {
    int k = 0;
    for(auto x : nums){
        if(x == target ){
            k++;
            continue;
        }
    }
    if (k > 0) {
        cout << "Frequency dari angka " << target << " di dalam array adalah " << k << endl;
    } else {
        cout << "Angka tidak ditemukan" << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 5};
    int target;
    cout << "Masukkan angka yang ingin dicari frekuensinya: ";
    cin >> target;
    freq(arr, target);
    return 0;
}