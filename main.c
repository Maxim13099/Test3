#include <iostream>

using namespace std;
#include<iostream>
using namespace std;

void insertionSort(int* ar,int size){
        int element;
        int indexArr;
        int j;
        int key=0;
        for(int i = 1; i < size; i++) {
        

                key=0;
                for( j = i-1; j >= 0; j--) {
                       
                        if (ar[j] > ar[i]) {
                                key=1;
                                element = ar[i];
                                indexArr = j+1;
                                break;
                        }
                }
                if(key==0){
                     element = ar[i];
                     indexArr = j+1;
                }
                for( j= i-1; j>=indexArr; j--){
                      
                        ar[ j+1] = ar[ j];
                }
                ar[indexArr] = element;
        }
}

int main(){
int ar[]={10,88,2,16,654};
insertionSort(ar,5);
for(int i=0;i<5;i++){
    cout<<ar[i]<<" ";
}
}
