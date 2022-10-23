#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void selectionSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                swap(arr[minIndex], arr[j]);
            }
        }
    }
}

int main(){
    int arr[8] ={64,25,10,15,89,90,42,37};
    int size = 8;

    cout<<"Unsorted array is: ";
    printArray(arr,size);

    //sorting
    selectionSort(arr,size);

    cout<<"Sorterd array is: ";
    printArray(arr,size);
   
    return 0;
}
