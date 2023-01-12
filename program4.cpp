#include<iostream>
using namespace std;
class calculate{
    private:
    int x,y;
    public:
    void getdata()
    {
        cout<<"enter the two numbers="<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"sum="<<sum()<<endl;
        cout<<"diff="<<diff()<<endl;
    }
    int sum()
    {
        return (x+y);
    }
    int diff()
    {
        return (x-y);
    }
};
int main(){
    class calculate data;
    data.getdata();
    data.display();
    return 0;
}