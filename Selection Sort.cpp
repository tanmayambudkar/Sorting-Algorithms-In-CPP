//Tanmay Ambudkar
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(std::vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}

int main(){
    std::vector<int> arr={10,7,8,9,1,5};
    int n=arr.size();
    selectionSort(arr);
    std::cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
    return 0;
}