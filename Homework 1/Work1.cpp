#include "std_lib_facilities.h"

class Bad_root {};  //reports error from root

double root1(double a, double b, double c){
double x1 = ((-b + (sqrt((b * b)-(4 * a * c))))/(2*a));


if (((b * b)-(4 * a * c))<0) throw Bad_root {};  //checks the argument...returns x1 if argument is good
    return x1; 
                                
}

double root2(double a, double b, double c){
double x2 = ((-b - (sqrt((b * b)-(4 * a * c))))/(2*a));

    if (((b * b)-(4 * a * c))<0) throw Bad_root {}; //returns x2 if the argument is good
    return x2;
}


int main()
{
    try {
        double a, b, c;
        cout << "Please input three numbers from keyboard \n";
        cin >> a >> b >> c;
        cout << "Roots are: " << root1(a, b, c)<< " and " << root2(a, b, c)<<"\n";
        }
    
    catch (Bad_root) { //catches the error from root and displays message below
        cout << "No real roots" << endl;
    }

    return 0;
}