#include<iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    void getdata(int d,int m,int y)
    {
        day=d;month=m;year=y;
    }
    void display()
    {
        cout<<"todays date is="<<day<<'/'<<month<<'/'<<year<<endl;
    }
};
int main(){
    class date today;
    int d1=10,m1=5,y1=2022;
    today.getdata(d1,m1,y1);
    today.display();
    return 0;
}