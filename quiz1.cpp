#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> v)
{
    std::sort(v.begin(), v.end()); // mengurutkan vektor
    v.erase(std::unique(v.begin(), v.end()), v.end()); // menghapus nilai duplikat
    return v;
}

int main()
{
    std::vector<int> v = {1, 2, 2, 3, 4, 5, 5};
    std::vector<int> result = remove_duplicates(v);
    
    // mencetak vektor hasil
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}