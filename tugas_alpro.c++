#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Menghindari overflow

        // Jika elemen tengah adalah target
        if (array[mid] == target) {
            return mid;
        }

        // Jika target lebih kecil, fokus di bagian kiri
        if (array[mid] > target) {
            high = mid - 1;
        } 
        // Jika target lebih besar, fokus di bagian kanan
        else {
            low = mid + 1;
        }
    }

    // Target tidak ditemukan
    return -1;
}

int main() {
    int array[] = {2, 4, 7, 10, 15, 20, 30};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 10;
    
    int result = binarySearch(array, size, target);
    
    if (result != -1) {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }

    return 0;
}
