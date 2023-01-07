#include<iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    void getdata()
    {
        cout<<"enter date(dd-mm-yy)"<<endl;
        cin>>day>>month>>year;
    }
    void display()
    {
        cout<<"todays date is="<<day<<'/'<<month<<'/'<<year<<endl;
    }
};
int main(){
    class date today;
    today.getdata();
    today.display();
    return 0;
}