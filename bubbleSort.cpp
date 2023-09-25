#include <iostream>
#include <vector>

bool sortCheck (std::vector <int>& arr)
{
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

void bubbleSort (std::vector <int>& arr)
{
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] < arr[i - 1]) std::swap(arr[i], arr[i - 1]);
    }

    if (sortCheck(arr)) return ;
    bubbleSort(arr);
}

void print (std::vector <int> arr){      //print function
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector <int> arr = {1, 224, 4, 42, 3, 4, 8, 2, 5 };

    bubbleSort(arr);
    print(arr);
}