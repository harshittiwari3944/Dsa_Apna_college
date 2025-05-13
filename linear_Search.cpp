#include<iostream>
using namespace std; 

int linear_search (int arr[],int size,int target){
    for (int i=0; i<=size;i++){
        if (arr[i]==target){
            return i;

        }
    }
    return -1;
}
int main (){
    int arr[]={23,4,6,7,8,9,0};
    int size =7;
    int target =8;
    cout<<linear_search(arr,size,target)<<endl ; 

    return 0; 
}