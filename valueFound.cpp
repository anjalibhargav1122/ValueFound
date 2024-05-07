#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size- 1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;



        }else if(arr[mid]<target){  
            start = mid+ 1;
        }else{
              end = mid- 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    int n ;
    cout<<"Enter value: ";
    cin>>n;
    int arr[n] ;
    for(int i =0;i<n;i++){
         cout<<"Enter value "<<i+ 1<<": ";
        cin>>arr[i];
    }
    int size = n;
    int target ;
     cout<<"Enter target value: ";
    cin>>target;
    cout<<endl;

    int indexValue = binarySearch(arr,size,target);

    if(indexValue==-1){
        cout<<"value not found"<<endl;
    }else{
        cout<<"value found at "<<indexValue<<" index : "<<arr[indexValue]<<endl;
    }
}
