#include<iostream>
using namespace std;
class calculate{
    private:
    int x,y;
    public:
    void getdata();
    void display();
    int sum();
    int diff();
};
    void calculate::getdata()
    {
        cout<<"enter the two numbers="<<endl;
        cin>>x>>y;
    }
    void calculate::display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"sum="<<sum()<<endl;
        cout<<"diff="<<diff()<<endl;
    }
    int calculate::sum()
    {
        return (x+y);
    }
    int calculate::diff()
    {
        return (x-y);
    }
int main(){
    class calculate data;
    data.getdata();
    data.display();
    return 0;
}