/*
control structures :
    sequential : line by line execution of the commnands 
    selection : Selection or decision making to execute that required blocks should be executed 
    iteration : repeated execution of the same block of code untill the condition is required 

Selection control stucture : 
    If statement :  if condition is true then execute it 
    If else statement : when there are two options for an event 
    Else If ladder Statement :  multiple options ; any condition satisfied then the all other conditions will be skipped 
    nested If Statement : interdependent conditions 
    Switch Case Statemet : one to choose out of multiple conditions 
            

*/

#include<iostream>
using namespace std ;
void If_Test();
void IfElse_Test();
void ElseIfLadder_Test();
void Nestedladder_Test();
void Switch_Test();

int main()
{
    Switch_Test();
    cout << "Test the control structure "<< endl ;
    return 0;

}

void If_Test()
{
    int m ;
    cout<<" enter the money "<< endl ;
    cin>> m;
    if (m>100)
        cout << " at lest hunderd bucks "<< endl ;
}

void IfElse_Test()
{
    int m ;
    cout<<" enter the money "<< endl ;
    cin>> m;
    if (m>100)
        cout << " at lest hunderd bucks "<< endl ;
    else
        cout << " not at least a hunred buck "<< endl;

}

void ElseIfLadder_Test()
{
    int m ;
    cout<<" enter the money "<< endl ;
    cin>> m;
    if (m>100)
        cout << " at lest hunderd bucks "<< endl ;
    else if (m>50 && m<100)
        cout << "  at least a fifty buck "<< endl;
    else
        cout << " not at least fifty bucks "<< endl ;

}

void Nestedladder_Test()
{
    int m ; 

}

void Switch_Test()
{
    int choice ;
    cout << " enter the appliance "<< endl;
    cin >> choice ; 

    switch (choice)
    {
        case 1 :
            cout <<" 1"<< endl ;
            break;

        case 2 :
            cout << " 2 " << endl; 
            break;
        default :
            cout << " not a choice "<< endl ;
            break ;
    }
}