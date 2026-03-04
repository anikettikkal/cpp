#include<iostream>
using namespace std;

class Employee{
    int empid,salary;
    char name[50];
    int present_days;

    public:
    void set_data(){
        cout<<"\nEnter Employee ID:";
        cin>>empid;
        cout<<"\nEnter Employee Name:";
        cin>>name;
        cout<<"\nEnter Employee Salary:";
        cin>>salary;
        cout<<"\nEnter Employee Present Days:";
        cin>>present_days;
    }

    void show_data(){
        cout<<"\nEmployee ID:"<<empid;
        cout<<"\nEmployee Name:"<<name;
        cout<<"\nEmployee Salary:"<<salary;
        cout<<"\nEmployee Present Days:"<<present_days;
    }

    int days(){
        cout<<"\nEmployee Present Days:";
        return (present_days);
    }

    int update_sal(){
        if(present_days>=200){
            salary=salary+10000;
        }
        else if(present_days>=300 ){
            salary=salary+20000;
        }
        else{
            salary=salary;
        }
        return (salary);
    }

};

main(){

    Employee e1,e2,e3;
    e1.set_data();
    e2.set_data();
    e3.set_data();

    cout<<"\nPrint First Employee Data";
    e1.show_data();

    cout<<"\nPrint Second Employee Data";
    e2.show_data();

    cout<<"\nPrint Third Employee Data";
    e3.show_data();


    cout<<"\n----------------------------------------";

    if(e1.days()>=200){
        cout<<"\nFirst Employee Salary after Update:"<<e1.update_sal();
    }
    else if(e1.days()>=300){
        cout<<"\nFirst Employee Salary after Update:"<<e1.update_sal();
    }
    else{
        cout<<"\nFirst Employee Salary after Update:"<<e1.update_sal();
    }

    e1.show_data();



    cout<<"\n----------------------------------------";

    if(e2.days()>=200){
        cout<<"\nSecond Employee Salary after Update:"<<e2.update_sal();
    }
    else if(e2.days()>=300){
        cout<<"\nSecond Employee Salary after Update:"<<e2.update_sal();
    }
    else{
        cout<<"\nSecond Employee Salary after Update:"<<e2.update_sal();
    }

    e2.show_data();




    cout<<"\n----------------------------------------";

    if(e3.days()>=200){
        cout<<"\nThird Employee Salary after Update:"<<e3.update_sal();
    }
    else if(e3.days()>=300){
        cout<<"\nThird Employee Salary after Update:"<<e3.update_sal();
    }
    else{
        cout<<"\nThird Employee Salary after Update:"<<e3.update_sal();
    }

    e3.show_data();

}