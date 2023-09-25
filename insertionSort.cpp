#include <iostream>
#include <vector>

void print (std::vector <int> arr){      //print function
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertSort(std::vector <int>& arr)
{
    int k = 0;
    for (int i = 1; i < arr.size(); i++){
        for (int sorted = i - 1; sorted > 0; sorted--){
            if (arr[sorted + 1] < arr[sorted]) std::swap(arr[sorted + 1], arr[sorted]);
        }
    }
}

int main ()
{
    std::vector <int> arr {1, 224, 4, 42, 3, 6, 8, 2, 5 };

    insertSort(arr);
    print(arr);
}