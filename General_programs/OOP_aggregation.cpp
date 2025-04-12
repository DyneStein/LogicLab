#include<iostream>
using namespace std;

// X can exist independently with out Y 
//this is class X (indepecdent class)
class Faculty
{

private:
string name;
int id;

public:
Faculty(string name, int id):name(name),id(id){}
~Faculty()
{

}




};

// this is complex class Y (dependent class)
class Department{
private:
Faculty ** ptr; //aggregation
int size;

public:
Department(int s = 3):ptr(new Faculty*[s]),size(s){}


//void addFaculty( string name, int id);  this is a composition thing ---> this is made into the class itself
//{ptr[0] = new Faculty}


//for aggregation
void addFaculty(Faculty *f)
{
    ptr[0] = f;
}



~Department()
{
    delete[] ptr;
}



};



int main()
{
    Faculty f("Shehryaar",948);
    Department CS, EE;
    CS.addFaculty(&f);



    return 0;
}


