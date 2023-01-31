#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    float m1,m2,m3;
    float total;
    public:
    int id;
    void getStudent(string,int,int);
    void getmarks(float,float,float);
    void display();
};
void Student::getStudent(string n,int r,int i){
    name=n;
    rollno=r;
    id=i;
}
void Student::getmarks(float s1,float s2,float s3){
    m1=s1;
    m2=s2;
    m3=s3;
}
void Student::display(){
    total=m1+m2+m3;
    cout<<"information is"<<endl;
    cout<<setw(12)<<name;
    cout<<setw(5)<<rollno;
    cout<<setw(5)<<m1;
    cout<<setw(5)<<m2;
    cout<<setw(5)<<m3;
    cout<<setw(8)<<total<<endl;
}
int main(){
    Student s[100];
    int numberofstudent;
    cout<<"enter number of student"<<endl;
    cin>>numberofstudent;
    string n;
    int i,r;
    float m1,m2,m3;
    for(int j=0;j<numberofstudent;j++)
    {
        cout<<"enter student"<<j+1<<endl;

        cout<<"enter name"<<endl;
        cin>>n;
        cout<<"enter rollno"<<endl;
        cin>>r;
        cout<<"enter three subject marks\n";
        cin>>m1>>m2>>m3;
        s[j].getStudent(n,r,i);
        s[j].getmarks(m1,m2,m3);
    }
    for(int j=0;j<numberofstudent;j++)
    {
        s[j].display();
    }
    return 0;
}