#include <iostream>
#include <vector>

using namespace std;  

void Bubble_sort(vector<int> &arr) {
    bool swap_done = true; 
    for (int i = 0; i < arr.size() - 1;++i) {
        if (arr[i] > arr[i + 1]) {
            arr[i] += arr[i+1];
            arr[i + 1] = arr[i] - arr[i +1];
            arr[i] = arr[i] - arr[i + 1];
            swap_done = false;
        }
    }
    
    if (!swap_done) Bubble_sort(arr);
}

int main(void){
    string input;
    vector<int> arr;
    
    while (cin >> input) {
      if (input == "#") break;
        arr.push_back(std::stoi(input));
    }
    std::cout << "Input:" << std::endl;    
    for (int i = 0; i < arr.size(); ++i) std::cout << arr[i] << " "; 
    std::cout << std::endl;
    
    Bubble_sort(arr);

    std::cout << "Output:" << std::endl;
    for (int i = 0; i < arr.size(); ++i) std::cout << arr[i] << " "; 
    std::cout << std::endl;
    
    return 0;
}