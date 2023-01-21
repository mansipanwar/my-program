#include<iostream>
using namespace std;
template<class T>
T Square(T n){
    return(n*n);
}
int main(){
    int x,xsq;
    float y,ysq;
    double z,zsq;
    cout<<"enter any integer"<<endl;
    cin>>x;
    cout<<"enter any float number"<<endl;
    cin>>y;
    cout<<"enter any double number"<<endl;
    cin>>z;
    xsq=Square(x);
    cout<<"x= "<<x<<"and its square is = "<<xsq<<endl;
    ysq=Square(y);
    cout<<"y= "<<y<<"and its square is = "<<ysq<<endl;
    zsq=Square(z);
    cout<<"z= "<<z<<"and its square is = "<<zsq<<endl;
    return 0;
}