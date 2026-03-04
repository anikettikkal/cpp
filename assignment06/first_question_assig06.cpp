#include<iostream>
using namespace std;

class Students{
    private:
    int roll_no;
    char name[20];
    int sub1,sub2,sub3;
    int percentage;

    public:
    void getdata(){
        cout<<"\nEnter roll no:";
        cin>>roll_no;
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter marks of subject 1:";
        cin>>sub1;
        cout<<"\nEnter marks of subject 2:";
        cin>>sub2;
        cout<<"\nEnter marks of subject 3:";
        cin>>sub3;
        percentage=(sub1+sub2+sub3)/3;

    }

    void showdata(){
        cout<<"\nRoll No:"<<roll_no;
        cout<<"\nName:"<<name;
        cout<<"\nMarks of subject 1:"<<sub1;
        cout<<"\nMarks of subject 2:"<<sub2;
        cout<<"\nMarks of subject 3:"<<sub3;
        cout<<"\nPercentage:"<<percentage;
    }


};

main(){
    Students s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"\nFirst Student Data";
    s1.showdata();
    cout<<"\nSecond Student Data";
    s2.showdata();
}