#include<iostream>
#include<string>
using namespace std; 
class Teacher{

    public:

    Teacher(){
        dept="computerScience";
    }

    string name;
    string dept;
    double salary ; 
};
int main (){

    Teacher teacher1;
    teacher1.name="Harshit tiwari";
    teacher1.salary=23000.0;

    
    cout<<teacher1.name<<endl;
    cout<<teacher1.dept<<endl;
    cout<<teacher1.salary<<endl;

    return 0 ;
}