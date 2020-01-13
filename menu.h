#include"root.h"
//#include <digits> 

void menu(){

int indx;
string s;
int a;
double rdcnd;

cout << "This program will calculate the principal root of the given input. " <<endl << endl;

while (1){

cout<< "Enter the accuracy in number of digtis after the decimal point from 1-9, or enter q to quit." << endl;


cin >> s;


while (s[0]-48>9 || s[0]-48<1 || s[1] > 0){
    if (s[0] == 'q'){
 cout << "Goodbye!";
     exit(0);}

    cout << "Please enter 1-9."<<endl;
    cin >> s;
}

a = stoi(s);


cout << "Enter the nth root (index)." << endl;
cin >> indx;



if (indx < 0){
    cout << "please enter a positive index." << endl;
    cin >> indx; 
}
cout << "Enter the radicand." << endl; 
cin >> rdcnd;


double root1 = root(rdcnd,indx, a);

int digits = numDigits(floor(root1));

//cout<< " digits:" << digits << endl;

cout.precision(digits + a);

 cout << rdcnd << " to the (1/" << indx << ") power, rounded to " << a << " decimal places is " << root1  <<"." << endl << endl ;

    }

}