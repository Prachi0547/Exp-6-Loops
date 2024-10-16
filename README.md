# Exp-6-Loops
# Aim
To learn about for loop and while loop.
# Software Used
VS Code and c++ online compiler.
# Problem Statement
Write a c++ program:
1. To print numbers using for loop.
2. To print numbers using while loop.
3. To make a triangular star pattern.
4. To make a square shaped star pattern.
5. To make a pyramid of star.
6. To get sum of the numbers printed.
7. To make a Floyd triangle.
8. To make a Floyd triangle of alphabets.
9. To password validate till correct password is entered.
# Theory
In C++, loops are fundamental constructs that allow the execution of a block of code multiple times. The three primary types of loops are the for loop, the while loop, and the nested for loop. Each serves different purposes and can be used based on the specific requirements of a program.

The for loop is often used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and iteration.

The while loop is used when the number of iterations is not known in advance and depends on a condition. It continues to execute as long as the specified condition evaluates to true.

A nested for loop consists of one for loop inside another. This allows for multi-dimensional iterations, such as iterating through rows and columns of a matrix.

# Program Code
```
//Print numbers using for loop.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}
```
```
//Print numbers using while loop.

#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;
}
```
```
//Triangular star pattern.

#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```
```
//Square shaped star pattern.

#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}
```
```
//Pyramid of star

#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
```
```
//Sum of the numbers printed.

#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is: "<<sum;
    return 0;
}
```
```
//Floyd triangle.

#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }  
    cout << endl;
    }
    return 0;
}
```
```
//Floyd triangle of alphabets.

#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }  
    cout << endl;
    }
    return 0;
}
```
```
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
```

# Output
### Numbers using for loop.
![image](https://github.com/user-attachments/assets/4f016a5e-1182-4fef-b5f0-72116975743f)
### Numbers using while loop.
![image](https://github.com/user-attachments/assets/7460cc6c-420f-4094-bd85-ab62bb30db67)
### Triangular star pattern.
![image](https://github.com/user-attachments/assets/adf64b66-db75-4005-94c0-531c9217dd79)
### Square shaped star pattern.
![image](https://github.com/user-attachments/assets/91baf088-9c7d-41f9-8bea-3dd1ae9b2541)
### Pyramid of star
![image](https://github.com/user-attachments/assets/b3f201bb-9177-4ed8-8ab4-d72824fa1c2e)
### Sum of the numbers printed.
![image](https://github.com/user-attachments/assets/c90ec1ee-cc18-4070-9de1-e3322b506653)
### Floyd triangle.
![image](https://github.com/user-attachments/assets/af74a271-3f50-485c-9285-0ab177003d18)
### Floyd triangle of alphabets.
![image](https://github.com/user-attachments/assets/40477d06-7019-4512-9b46-ade51de68038)
### Password validation
![image](https://github.com/user-attachments/assets/fe17c467-c5f6-4430-ab3d-b5060a1ccddd)

# Conclusion
We learnt to use for loop, while loop and nested for loop.












