#include<iostream>
using namespace std;
class date
{
    public:
     int day,month,year;
};
int main()
{
    class date today;
    today.day=10;
    today.month=5;
    today.year=2022;
    cout<<"todays date is="<<today.day<<'/'<<today.month<<'/'<<today.year<<endl;
}