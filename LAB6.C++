#include<iostream>
using namespace std;

class Time 
{
    public:
int hr;
int min;
int sec;

Time()
{
  hr=0;
  min=0;
  sec=0;
}
Time (int H,int M,int S)
{
hr=H;
min=M;
sec=S;
}
void display()
{
    cout<<hr<<":"<<min<<":"<<sec<<endl;
}
void addtime(Time x, Time y)
{

    hr=x.hr+y.hr;
    min=x.min+y.min;
    sec=x.sec+y.sec;
}
};
int main()
{
    int hourse1,minute1,second1;
    int hourse2,minute2,second2;
    cout<<"*-----------------*"<<endl;
    cout<<"Enter the first time"<<endl;
    cout<<"Enter the hourse"<<endl;
    cin>>hourse1;
    cout<<"Enter the minute"<<endl;
    cin>>minute1;
    cout<<"Enter the second"<<endl;
    cin>>second1;
    cout<<endl;
    cout<<"*-----------------*"<<endl;
    cout<<"Enter the second time"<<endl;
    cout<<"Enter the hourse"<<endl;
    cin>>hourse2;
    cout<<"Enter the minute"<<endl;
    cin>>minute2;
    cout<<"Enter the second"<<endl;
    cin>>second2;
    cout<<endl;
    cout<<"*-----------------*"<<endl;
    cout<<"total time is "<<endl;
    Time t1(hourse1,minute1,second1);
    Time t2(hourse2,minute2,second2);
    Time t;
    t.addtime(t1,t2);
    t.display();
    cout<<"*-----------------*"<<endl;
    return 0;
}