/*drive two serived classes triangle and rectangle 
    and compute area as vertual function and re diefine 
    this function in derived classes*/
    #include <iostream>
    using namespace std;
    class shape
    {
        protected:
            double a,b;
     public:
         void computearea()
    {
        cout<<"this is the base class compute area function"<<endl;
        
    }
    void inputdata()
    {
        cout<<"enter two dimention"<<endl;
        cin>>a>>b;

    }
    };
    class triangle:public shape
    {
        public :
         void computearea()
        
        {
            cout<<"triangle area :"<<0.5*a*b<<endl;

        }
    };
    class rectangle:public shape
    {
        public :
        void computearea()

        {
            cout<<"reactangle is  :"<<a*b<<endl;

        }
    };
    int main()
    {
     triangle T;
     T.inputdata();
     T.computearea();
     rectangle R;
     R.inputdata();
     R.computearea();

    }

