#include<iostream>
#include<string>
using namespace std;
class baseA{
    private:
    int x;
    float y;
    public:
    virtual void get_data();
    virtual void display();
};
class derivedB:public baseA{
    private:
    long int rollno;
    char name[20];
    public:
    void get_data();
    void display();
};
class derivedC:public baseA{
    private:
    float height;
    float weight;
    public:
    void get_data();
    void display();
};
void baseA::get_data(){}
void baseA::display(){}
void derivedB::get_data(){
    cout<<"enter roll number of student"<<endl;
    cin>>rollno;
    cout<<"enter name of student"<<endl;
    cin>>name;
}
void derivedB::display(){
    cout<<"roll number     student name"<<endl;
    cout<<rollno<<"\t\t"<<name<<endl;
}
void derivedC::get_data(){
    cout<<"enter height of student"<<endl;
    cin>>height;
    cout<<"enter weight of student"<<endl;
    cin>>weight;
}
void derivedC::display(){
    cout<<"height     weight"<<endl;
    cout<<height<<"\t\t"<<weight<<endl;
}
int main(){
    baseA *ptr[3];
    derivedB objb;
    derivedC objc;
    ptr[0]=& objb;
    ptr[1]=& objc;
    ptr[0]->get_data();
    ptr[1]->get_data();
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}