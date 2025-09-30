//Tanmay Ambudkar
#include<iostream>
#include<vector>
class bubleSort{
public:
    void sort(std::vector<int>& arr){ 
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    std::swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};
class SearchArr{
public:
    int binarysearch(const std::vector<int>& arr,int target){ 
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
int main(){
    bubleSort sorter;
    SearchArr s;
    std::vector<int> arr={-1,0,3,5,9,12};
    sorter.sort(arr); // Sort the array before binary search

    std::cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;

    int target=9;
    int result=s.binarysearch(arr,target);
    if(result!=-1){
        std::cout<<"Element found at index: "<<result<<std::endl;
    }
    else{
        std::cout<<"Element not found"<<std::endl;
    }
    return 0;
}