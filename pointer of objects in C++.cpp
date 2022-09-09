//pointer can also store the address of an object .... an example is illustrated below...............
#include<iostream>
using namespace std;
class complex
{
    private:
    int r;
    int i;
    public :
    void getdata()
    {
        cout<<"the value of the real part of the complex number is = "<<r<<endl;
        cout<<"the value of the imaginary part of the complex number is = "<<i<<endl;
        }
    void setdata(int a , int b)
    {
        r=a;
        i=b;
        }
    };
int main()
{
    // * dereference operator 
    // & address of operator 
    complex obj;
    complex *ptr= &obj; // ptr nam ka pointer variable banaya complex type ka jisko object obj ka address diya
    //complex *ptr= new complex;
    //(*ptr).setdata(1,2);
    //(*ptr).getdata();
    obj.setdata(13,4);
    obj.getdata();s
    ptr->setdata(1,2); // iska matlab hua ki pointer ko derefernce karke setdata function me (1,2) dalo
    ptr->getdata(); // iska matalb hua ki pointer ko dereference karke getdata() chalao
    return 0;
    //(*ptr).setdata(1,2) is same as ptr->setdata(1,2)
}