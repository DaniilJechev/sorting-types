#include <iostream>
#include <vector>

//separating index = [ (arr.size() - 1) / 2 ]
//In start write a f which will partition array on 2 parts, left part < separating element, right part > separating element

void print (std::vector <int> arr){      //print function
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int partOfSort (std::vector <int>& arr, int l, int r)
{
    int u = arr[(l + r) / 2];
    while (l <= r){
        while ( arr[l] < u) l ++;
        while (arr[r] > u) r --;
        if (l <= r){
            std::swap(arr[l], arr[r ]);
            l ++;
            r --;
        }
        print (arr);
    }
    return l;
}

void quickSort (std::vector <int>& arr, int start, int end)
{
    if (start >= end) return;
    int rightStart = partOfSort (arr, start, end);
    quickSort (arr, start, rightStart - 1);
    quickSort (arr, rightStart, end);
}


int main ()
{
    std::vector <int> arr = {5,1,2,7,1,8,9,124,4,5,67,11,2};
    quickSort(arr, 0, arr.size() - 1);
    print (arr);
}