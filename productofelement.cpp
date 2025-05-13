#include<iostream>
using namespace std; 
int productOF(int arr[],int size){
 int   product= 1;
 for(int i =0 ;i<size;i++){
    product*= arr[i];
 }
 return product;

}
int main (){
    int arr[]={2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"the product of the array is:"<<productOF(arr,size);
    return 0;
}