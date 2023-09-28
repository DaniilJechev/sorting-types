#include <iostream>
#include <vector>


void shellSort(std::vector <int>& arr, int step)      
{
    if (step > 0){
        for (int i = 1; i < arr.size(); i++){
            for (int sorted = i - 1; sorted + 1 > 0; sorted--){
                if (arr[sorted + 1] < arr[sorted]) std::swap(arr[sorted + 1], arr[sorted]);
                else break;
            }
        }

    }else return;
    step /= 2;
    if (step > 1) step ++;
    shellSort(arr, step);
}

void print (std::vector <int> arr){      //print function
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector <int> arr {1, 3, 4, 142, 3, 6, 8, 45, 5 };
    shellSort(arr, arr.size() / 2);
    print(arr);
}
