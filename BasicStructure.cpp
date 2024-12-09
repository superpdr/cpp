//Author = Piyush
/*Programme for the illustration of the structure */

#include<iostream>

//namespace section 

#define PI 3.142 

int radius = 2;
void Area();

class Cpp
{
    public :
        int a ;
        void display(){
            std::cout<<"Indside the class"<<std::endl;
        }

};

int main(){
    Cpp obj;
    obj.a= 90;
    obj.display();
    std::cout<<"inside the main function "<<std :: endl;
    Area();

}

void Area(){
    float area ;
    area = PI *radius*radius ;
    std::cout<<"The area calculated is : "<< area <<std::endl;

}