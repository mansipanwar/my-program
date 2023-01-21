#include<iostream>
using namespace std;
template <class T>
class Sample{
    private:
    T value1,value2,value3;
    public:
    void getdata();
    void sum();
};
template<class T>
void Sample <T>::getdata(){
    cin>>value1>>value2;
}
template <class T>
void Sample <T>::sum(){
    value3=value1+value2;
    cout<<"sum= "<<value3<<endl;
}
int main(){
    Sample <int> obj1;
    Sample <float> obj2;
    cout<<"enter any two integers"<<endl;
    obj1.getdata();
    obj1.sum();
    cout<<"enter any two float numbers"<<endl;
    obj2.getdata();
    obj2.sum();
    return 0;
}