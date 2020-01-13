#include <iostream>
#include <math.h>

using namespace std;



int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}


double root(double &rad, int index, int acc){ // Function returns the nth root of the given radicand.

int sign = 0;


if (rad < 0){
    sign = 1; }



if (sign ==1   && index % 2 == 0){
    cout << "The radicand provided will return imaginary roots which is not supported by this program, please enter a positive radicand." << endl;
    cin >> rad;   
 }

 rad = abs(rad);

//Binary Search Root Algorithm for the integral part of the root. 
long l=0;
double m;
if (rad < 1){
    m=0;
}
else if (rad == 1){
    return 1;
}
else if(rad > 1){
long r = floor(rad); 
      m = floor((l +r )/2);

    if (pow(m, index) < rad){
    l=m+1; 
    //cout << m <<endl;
    }

    else if (pow(m,index) > rad){
    r = m-1;
    //cout << m <<endl;
    }

  while (pow(m, index) > rad){
      m--;
  }
    
}


int j=0;
int i=1;
double  guess = m;


if (pow(guess, index) != rad){

while ( pow(guess, index)< rad){
        guess += pow(10, -i);
         //printf("%lf\n", guess);
         //cout << endl;
        j++;
        if  (pow(guess, index) > rad){
       guess -= pow(10,-i);
        i+=1;
        j=0;
        }
        if (j== 9){
            j=0;
            i++;
            }
        if (i == acc+1){
            //cout << guess << endl;
             break;
            
        }
}

}

if (sign == 1 && index % 2 != 0){
    guess = -guess;
    rad = -rad;
 }

    return guess;
}

