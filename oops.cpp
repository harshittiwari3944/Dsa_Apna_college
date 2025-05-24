#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string Name;
    string Dept;
    string Subject;
    int Salary;

    void changeDept(string newDept){
        Dept= newDept;
    }
};

int main (){
    Teacher Teacher1;
    Teacher1.Name="harshit";
    Teacher1.Dept= "Computer science AI ";
    Teacher1.Subject="C++";
    Teacher1.Salary=200000;

    cout<<Teacher1.Name<<endl;
    cout<<Teacher1.Salary<<endl;
    cout<<Teacher1.Dept<<endl;
    cout<<Teacher1.Subject<<endl;

    return 0; 
}