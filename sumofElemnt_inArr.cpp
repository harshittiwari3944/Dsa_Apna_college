#include<iostream>
using namespace std; 
int SumOF(int arr[],int size){
   int sum=0 ;
   for(int i = 0; i<size;i++){
    sum += arr[i];
   }
     return sum;
}
int main (){
    int arr[]={2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<" sum of element in array is :"<<SumOF(arr, size);
    return 0;
}