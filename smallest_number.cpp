#include<iostream>
using namespace std; 
int main (){
    int arr[]={5,1,15,-24,69};
    int size =5;
    int smallest= INT16_MAX;

    for (int i =0; i<=size;i++){
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
cout<<"smallest is :"<<smallest<<endl;

}