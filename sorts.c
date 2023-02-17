
#include <iostream>
#include <chrono>
#include <cstring>
#include "sorts.h"
using namespace std;

int main()
{ 
    int arsize[] = 100
    int *ar = new int[arsize]
    cout<<arsize<<"/t"
    randomFilling(ar, arsize, 0,999)
    
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    start = std::choro::high_resolution_clock::now();
    


static void merge(int* ar, int size, int central) {
    int left = 0;
    int right = central;
    int* arTemp = new int [size];
    int indexTemp = 0;

    while (left < central && right < size) {
        while(ar[left] <= ar[right] && left < central) {
            arTemp[indexTemp++] = ar[left++];
//            left++;
//            indexTemp++;
        }
        while(ar[left] > ar[right] && right < size) {
            arTemp[indexTemp] = ar[right];
            indexTemp++;
            right++;
        }
    }

    while (left < central) {
        arTemp[indexTemp++] = ar[left++];
    }
    while (right < size) {
        arTemp[indexTemp++] = ar[right++];
    }

    memcpy(ar, arTemp, size * sizeof(int));

    delete [] arTemp;
}

void mergeSort(int* ar, int size) {
    if (size <= 1) {
        return;
    }
    mergeSort(&ar[0], size >> 1);
    mergeSort(&ar[size >> 1], size - (size >> 1));

    merge(ar, size, size >> 1);
}

    
    std::chrono::time_point<std::chrono::high_resolution_clock:: end;
    end = std::chrono::high_resolution_clock::now()
    std::chrono::duration<double> dif = end - start;
    std::cout << diff.count() << std::endl;
    return 0;
}
    
