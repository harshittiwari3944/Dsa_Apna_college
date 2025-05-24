#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string course;

    void setsalary(double S){

        salary= S;
    }
    double getsalary(){
        return salary;
    }
};

int main(){
 
    Teacher teacher1;
    teacher1.name="rakesh";
    teacher1.course="C++";
    teacher1.dept="CSE AI";
    teacher1.setsalary(25000);
   
   
   
    cout<<teacher1.name<<endl;
    cout<<teacher1.course<<endl;
    cout<<teacher1.dept<<endl;
    cout<<teacher1.getsalary()<<endl;
}