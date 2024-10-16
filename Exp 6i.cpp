//Password validation

#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Sucess !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
