#include<iostream>
using namespace std ;

class Bank 
{
    private :
    int atmPin ,balance ;

    public :
    string bName , ifsc ;
    int accNumber ;
    
    void input()
    {
        atmPin = 1234;
        balance = 102132;
        bName = "SBI";
        ifsc = "SBIN004433";
        accNumber = 123456789;
    }

    void output()
    {
        cout << " my details "<<endl;
        cout << " atm pin "<<atmPin<<endl;
        cout << " balance "<<balance<<endl;
        cout << " bank name  "<<bName<<endl;
        cout << " ifsc number " <<ifsc<<endl;
        cout << " accounnt number  "<<accNumber<<endl;
    }
};


int main ()
{
    Bank account ;
    account.input();
    account.output();

    cout << " here the the abstraction thing "<< endl ;
    cout << " only the public is availablke and ewe have hided the private from users "<< endl;

    cout << " my details "<<endl;                                            // not possible 
        cout << " atm pin "<< account.atmPin<<endl;                         //not possible 
        cout << " balance "<< account.balance<<endl;
        // cout << " bank name  "<< account.bName <<endl;
        // cout << " ifsc number " << account.ifsc <<endl;
        // cout << " accounnt number  "<< account.accNumber <<endl;


    return 0;

}