//header file declaration
#include <iostream>
using namespace std;

//defining variables
#define PI 3.1415926535

//functuin Declaration
double avgOfThree(double a, double b, double c);
int sumOfOdd(int n);
double max(double a, double b);
double min(double a, double b);
int pow(int a, int b);
double circumByRad(double radius);
string canVoteOrNot(int age);
void infiniteLoop();
void countNumType();
int commonDeviser(int a, int b);
double fibonacci(int n);


//Calculate the Average of three number.
double avgOfThree(double a, double b, double c) {
    return (a+b+c)/3;
}

//Calculate The Sum of All odd number Between 1 to n.
int sumOfOdd(int n) {
    int temp = 0;
    for(int i = 1; i <= n; i += 2) {
        temp += i;
    }
    return temp;
}

// function to check the greater between two number.
double max(double a, double b) {
    if(a < b) {
        return b;
    } else if(a > b) {
        return a;
    } else {
        return 0;
    }
}

// function to calculate the lower between two number.
double min(double a, double b) {
    if(a < b) {
        return a;
    } else if(a > b) {
        return b;
    } else {
        return 0;
    }
}

// function to calculate the value of a power number.
int pow(int a, int b) {
    int c = a;
    for(int i = 1; i < b; i++) {
        c = c * a;
    }
    return c;
}

//function to calculate the cercumference of a circle using radius.
double circumByRad(double radius) {
    return 2*PI*radius;
}

// function to calculate the person vote eligibility by age.
string canVoteOrNot(int age) {
    if(age < 18) {
        return "Cannot Vote";
    }else {
        return "Can Vote";
    }

}

//infinite loop function can print from 1 to infinity.
void infinity() {
    bool a = true;
    int i = 1;
    do {
        cout << i << endl;
        i++;
    }while(a);
}

//Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
void countNumType() {
    int n,
    sum_p = 0,
    sum_n = 0,
    sum_z = 0;
    char choice;

    do
    {
        cout << "Enter number : ";
        cin >> n;

        if(n > 0)
        sum_p++;
        else if(n < 0)
        sum_n++;
        else
        sum_z++;

        cout << "Do you want to Continue(y/n) : ";
        cin >> choice;

    }while(choice == 'y' || choice == 'Y');


    cout << "Positive Number :" << sum_p << "\nNegative Number :" << sum_n << "\nZero Number :" << sum_z;
}

// write a program to fund the greatest common divisor of two number.
double gcd(int a, int b){
    int arr1[40], arr2[40]; 
    int i;
    double c = 1, d = 1;
    for(i = 0; i <= 40; i++){
        if(a % 7 == 0){
            arr1[i]=7;
            a = a / 7;
        }else if(a % 5 == 0){
            arr1[i] = 5;
            a = a / 5;
        }else if(a % 3 == 0){
            arr1[i] = 3;
            a = a / 3;
        }else if(a % 2 == 0){
            arr1[i] = 2;
            a = a / 2;
        }else {
            arr1[i] = a;
            break;
        }
    }
    a = i;
    for(i = 0; i <= 40; i++){
        if(b % 7 == 0){
            arr2[i]=7;
            b = b / 7;
        }else if(b % 5 == 0){
            arr2[i] = 5;
            b = b / 5;
        }else if(b % 3 == 0){
            arr2[i] = 3;
            b = b / 3;
        }else if(b % 2 == 0){
            arr2[i] = 2;
            b = b / 2;
        }else {
            arr2[i] = b;
            break;
        }
    }
    b = i;
    for(int k = 0; k <= a; k++){
        for(int l = 0; l <= b; l++){
            if(arr1[k] == arr2[l]){
                c = c * arr1[k];
                arr1[k] = arr2[l] = 0;
                break;
            }
        }
    }
    return c;
}

class Fibonacci{
    public:
    double fibonacci(int n){
        if(n == 0 || n == 1){
            return n;
        }else if(n == -1){
            return 1;
        }else{
            if(n >= 0){
                return fibonacci01(n);
            }else if((n < 0) && (n % 2) == 0){
                return fibonacci01(n*-1)*-1;
            }else{
                return fibonacci01(n*-1);
            }
        
        }
    }

    double fibonacci01(int n){
        double f1, f2, f3, a;
        f1 = 0;
        f2 = 1;
        if(n == f1){
            return 0;
        }else if(n == f2){
            return 1;
        }else{
            for(int i = 2; i <= n; i++){
                f3 = f1 + f2;
                cout << "The Fibonacci of " << i << " is " << f3 << endl;
                f1 = f2;
                f2 = f3;
            }
        }
        return f3;
    }
};
