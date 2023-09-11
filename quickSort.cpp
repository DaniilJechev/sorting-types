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

void quickSort (std::vector <int>& arr, int l, int r)
{
    if ( l >= r) return;
    float i = l , j = r;
    int middleIndex = (l + r) / 2;
    int u = arr[middleIndex];
    while (i < j){
        while ( arr[i] < u) i ++;
        while (arr[j] > u) j --;
        if (i < j){
            std::swap(arr[i], arr[j]);
            i ++;
            j --;
            if (r - 1 == l) return;
        } else if ( r - 1 == l ) return ;
    }
        quickSort (arr, l, r - middleIndex );      // left part
        if (l != 0 && r != arr.size() - 1) return;
        quickSort (arr, (l + r)  /  2, r);      // right part
        return ;
        
}

int main ()
{
    std::vector <int> arr = {1, -1, 0, 2000000000, 4};
    quickSort(arr, 0, arr.size() - 1);
    print (arr);
}