
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
    
int mergeSort(int* ar, int size) {
    if(size <= 1) {
        return -1;
    }
    int lSize = size/2;
    int rSize = size - lSize;
    mergeSort(ar, lSize);
    mergeSort(ar + lSize, rSize);
    int* sAr = new int[size];
    merge(ar, lSize, ar + lSize, rSize, sAr);
    std::memcpy(ar, sAr, sizeof(int) * size);
    delete [] sAr;
    return -1;
}

    
    std::chrono::time_point<std::chrono::high_resolution_clock:: end;
    end = std::chrono::high_resolution_clock::now()
    std::chrono::duration<double> dif = end - start;
    std::cout << diff.count() << std::endl;
    return 0;
}
    
