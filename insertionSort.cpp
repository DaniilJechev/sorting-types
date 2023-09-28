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
    for (int i = 1; i < arr.size(); i++){
        for (int sorted = i - 1; sorted + 1 > 0; sorted--){
            if (arr[sorted + 1] < arr[sorted]) std::swap(arr[sorted + 1], arr[sorted]);
            else break;
        }
    }
}

int main ()
{
    std::vector <int> arr {1, 3, 4, 142, 3, 6, 8, 45, 5 };

    insertSort(arr);
    print(arr);
}
