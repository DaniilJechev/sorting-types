#include <iostream>
#include <vector>

bool allowedSwap (int size, int i)  //swap check
{
    return (i * 2 + 2 <= size);
}

void print (std::vector <int> arr){      //print function
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void heapSwap(std::vector <int>& arr, int size, int i)   //swap functinon
{
    if ((size < 1) || (i < 0) ) return ;
    while (i * 2 + 1 > size ) i--;
    while ( i >= 0){
        if (allowedSwap(size, i)){
            if (arr[i * 2 + 1] >= arr[i * 2 + 2] && arr[i * 2 + 1] > arr[i]){   
                std::swap(arr[i], arr[i * 2 + 1]);
            }else if (arr[i * 2 + 2] >= arr[i * 2 + 1] && arr[i * 2 + 2] > arr[i]){
                std::swap(arr[i], arr[i * 2 + 2]);
            }
        }else if (arr[i] < arr[i * 2 + 1]) std::swap(arr[i], arr[i * 2 + 1]);
        i --;
    }
    return;
}

void sort (std::vector <int>& arr, int size)
{
    int k = size;
    for (int i = 0; i < k; i ++){
        heapSwap(arr, size, size);
        std::swap (arr [0], arr [size]);
        size--;
    }
}

int main()
{
    std::vector <int> arr = {2, 7, 5, 2, 3,11, 51, 2, 33, 4132, 6, 8, 5};
    sort (arr, arr.size() - 1);
    std::cout << "\nSorted array : \n" ;
    print (arr);
}