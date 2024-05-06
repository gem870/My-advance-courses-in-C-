#include <iostream>
#include <vector>
#include <algorithm> 

//  Constraints: 1 <= n <= 100      and   0 <= arr[I] <= 2 

void sort_numbers(std::vector<int>& arrValus) {
    int left = 0, right = arrValus.size() - 1, i = 0;
    while (i <= right) {
        if (arrValus[i] == 0) {
            std::swap(arrValus[i], arrValus[left]);
            left++;
            i++;
        }
        else if (arrValus[i] == 2) {
            std::swap(arrValus[i], arrValus[right]);
            right--;
        }
        else {
            i++;
        }
    }
    {

    }

 }

int main() {
    std::vector<int> colors = { 2, 0, 2, 1, 1, 0,2,1 };
    sort_numbers(colors); // Sort colors using Dutch National Flag algorithm
    std::cout << "Sorted colors: ";
    for (int color : colors) { // Print sorted colors
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
