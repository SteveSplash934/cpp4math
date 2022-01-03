#include <iostream>
#include <cmath>

using namespace std;
// ax² + bx - c = 0
//x =(-b ± √b² - 4ac)/2a
double a,b,c;

double quadSolver(double a, double b, double c){
double x1, x2, b_minus, b_power, sqrt_finder, diver;
//init the formula the appropriate way and don't rush things
b_minus = -b;
b_power = pow(b, 2);
sqrt_finder = sqrt(b_power - (4 * a * c));
diver = 2 * a;
//implement the formula
//solution 1, x1 => positive
x1 = (b_minus +  sqrt_finder)/diver;
//solution 2, x2 => negative
x2 = (b_minus -  sqrt_finder)/diver;

cout<<x1<<" or ";
return x2;
}

int main(){
cout<<"Enter the parameter a, b, c in order"<<endl;
cin>>a>>b>>c;
cout<<"Answer is "<<quadSolver(a,b,c)<<endl;
return 0;
}
