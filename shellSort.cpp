#include <iostream>
#include <vector>


void shellSort(std::vector <int>& arr, int step)      
{
    if (step > 0){
        for (int i = 0; i < arr.size() - step  ; i++){
            for (int sorted = i + step; sorted > 0; sorted -= step){
                if (arr[sorted] < arr[sorted - step] && sorted - step >= 0) std::swap(arr[sorted], arr[sorted - step]);
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