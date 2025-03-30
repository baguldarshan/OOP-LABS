#include <iostream>
using namespace std;

class employee
{
    public:
  string em_name;
  int em_id;
  float em_salary;
  float em_bonus;

  float total_salary()
  {
    return em_salary + em_bonus;
  }
  void dislpay() 
  {
   cout<<"employe name ==="<<em_name<<endl;
   cout<<"employe id==="<<em_id<<endl;
   cout<<"basic salary==="<<em_salary<<endl;
   cout<<"bonus received ==="<<em_bonus<<endl;
   cout<<"Total salary==="<<total_salary()<<endl;
  }
};
int main()
{
    employee e1;
  cout<<"name  ";
  cin>>e1.em_name;
  cout<<"id  ";
  cin>>e1.em_id;
  cout<<"salary  ";
  cin>>e1.em_salary;
  cout<<"bonus  ";
  cin>>e1.em_bonus;
  cout<<"-------EMPLOYE  1 DETAILS------\n";
  e1.dislpay() ;
 
      employee e2;
  cout<<"name  ";
  cin>>e2.em_name;
  cout<<"id  ";
  cin>>e2.em_id;
  cout<<"salary  ";
  cin>>e2.em_salary;
  cout<<"bonus  ";
  cin>>e2.em_bonus;
  cout<<"-------EMPLOYE  2 DETAILS------\n";
  e2.dislpay() ;
  return 0;
}