/*
    Class : user definbed data type with data members and member function . 
            data member and data functions can be used with the instance of class . 

            syntax : 
                    class ClassName
                    {
                        data members ;     private by default 

                        member functions ; 

                        Access specifiers for protecton


                    };
            
    Object : instance of the class that has state and behavior 
             state : atrributes (dsata member)
             behavior : member function

             syntax : 
                        ClassName objectName; 


    Access specifier : 
                For the security purpose 

                private :  class itself 
                           Friend of class 
                
                protected: class itself 
                           inherited classes

                public : anywhere accessible  


    constructor : 
                special type of function with same name as that of class
                automatically called at the time of object creation
                main purpose of constructor is to initialize the object .

                syntax : 
                        class A 
                        {
                            A()
                            {
                            }
                        };

                type : 
                    Default : constructor without any parameter to set value 
                    parameterized : constructor witht the parasmeter to set the value 
                    copy constructor : construcotr used to create a copy of other constructor 
    destructor : 
                special member function 
                used to de allocate the memory that was allocated by constructor .

                synatax : 
                        class A {
                            A(){
                            }

                            ~A()
                            {
                            }
                        }
            
    Friend function : 
                    not a member of class 
                    It can access the private and protected members of class
                    keyword : friend 
                    declared in class but implementation outside the class 

                    syntax :
                        friend returnType functionName( class ref )
    
    Friend class : 
                    friend class can access all orivate and protected members of tha class of which it is friend 
                    syntax : 
                        friend class className ; 

    abstraction : 
                    technique to hide unneccessary data and show only necessary data 
                    through access specifiers .

    encapsulation : 
                     technique to wrap the data member and member functionn into a single unit . 

                     purpose is to secure the data .
                     100% secure - encapsulation 
                     50% secure - abstraction 

    Inheritance : 
                    one class access the property of other class 
                    codse reusability 
                    typeas :
                        single : one base and one derived class 
                                syntax : 
                                        class A {// implementation };
                                        class B : public A { // implementation };

                        multi level inheritance :
                                    syntacx : 
                                            class A {
                                             a+b ;
                                             };
                                            
                                            class B : public A 
                                            { a-b ;
                                            }
                                            
                                            class c : class B 
                                            {
                                                a*b ;
                                                a/b ;
                                            }

                        multiple inheritance : 
                                            one or more  base class and single derived class 
                                            
                                            syntax : 
                                                      class A {
                                                                 a+b ;
                                                                };
                                            
                                            class B 
                                            { a-b ;
                                            }
                                            
                                            class c 
                                            {
                                                a*b ;
                                                a/b ;
                                            }

                                            class D : public A , public B , public C 
                                            {
                                                a>b ; 
                                                a<b ;
                                            };
                        
                        hierarchical inheritance : 
                                            one base class and then multiple class derive it 

                                            syntax :
                                                    class A { a+b };

                                                    class B : public A { a-b };
                                                    class C : public A { a *b } ;
                        
                        polymorphism : 
                                    same object having different behavior

                                    complile time (function overloading )
                                    run time (function overriding )


                                    function overloading : 
                                                class having method with same name but different parameters 
                                                early binding static polymorphism
                                                syntax :
                                                    class A 
                                                    {
                                                      public : 
                                                            void add (){}
                                                            void add (int a ){}
                                                            void add (int a , float b ){}
                                                    
                                                    } 
                                    function overriding : 
                                                 whenever we write a method with same name and parameters in the base adn derived class then it is overriding 
                                                 inheritance is required for it 

                                                 syntax :
                                                    class A 
                                                    {
                                                    public :
                                                        void add ()
                                                        {
                                                        }
                                                    }        
                                                    class B : public A 
                                                    {
                                                     public :
                                                     void add ()
                                                     {
                                                     }
                                                    }


  
*/


#include<iostream>
using namespace std ;

class Print 
{
 public : 
    void show (){
        cout << " hello world "<<endl ;
    }

};

class Person 
{
    int run ; 
    string msg ;

    public :
        void play (){
            run =50 ;
            cout << "today i scored  "<< run << " runs "<<endl;
        }

        void walk(){
            msg = " today i walk 10 kms ";

            cout << msg << endl;
        }


};

int main()
{
   Person obj ;

   obj.play();
   obj.walk();
    
    return 0;
}