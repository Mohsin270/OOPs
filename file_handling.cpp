#include<iostream>
#include <fstream>
using namespace std;



int main()
{

ofstream myfile;
myfile.open("file1.txt,ios::app");

int a =5;
myfile <<"all is well ";
myfile << a;
cout<<"enter";
string v;
cin>> v;

myfile.close();
return 0;
}