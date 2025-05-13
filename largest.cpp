#include<iostream>
using namespace std; 
int main (){
    int arr[]={2,3,49,0,32,64};
    int size= 6; 
    int largest= INT16_MIN;
    for (int i= 0; i<=size;i++){
        largest= max(arr[i],largest);
          
    }
    cout<<" largest is : "<<largest<<endl;
    return 0; 
}