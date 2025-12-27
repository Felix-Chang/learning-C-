#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

// using text_t = std::string; // alternate, better way of creating new type 

int main() {
    // std::string name = "Bro";
    // int x = 0;


    // using namespace first;

    // cout << x << endl;
    // cout << first::x << endl;
    // cout << second::x << endl;

    // pairlist_t pairlist;


    // text_t firstname = "bro";

    // int student = 2;

    // student++;

    // int x = 3.14;
    // double x = (int) 3.14; --> explicit casting
    // double x = 3; --> implicit casting

    // cout << x;

    // char y = 100; // --> implicitly converts to char type ASCII which is the letter d

    // cout << (char) 100; // --> explicitly converts to char type

    // int correct = 8;
    // int questions = 10;

    // double score = correct / (double) questions * 100;

    // cout << score << "%";

    // cout << "enter your full name" << endl; 
    // getline(cin >> ws, name); // getting input that contains space

    // cout << name;

    // double x = 3;
    // double y = 4;
    // double z;

    // z = max(x ,y);
    // z = min(x, y);

    // cout << z;


    // Hypotenuse Calculator
    // double a;
    // double b;
    // double c;

    // cout << "Enter the length of side A: ";
    // cin >> a;

    // cout << "Enter the length of side B: ";
    // cin >> b;

    // c = sqrt(pow(a, 2) + pow(b, 2));

    // cout << "The length of side C is " << c << endl;

    // int age;
    
    // cout << "Enter your age: ";
    // cin >> age;

    // if (age >= 18) {
    //     cout << "Welcome!";
    // }
    // else if (age <= 0) {
    //     cout << "Invalid age";
    // }
    // else {
    //     cout << "You can't enter";
    // }

    // int month;
    // cout << "Enter the month (1-12): ";
    // cin >> month;

    // switch(month){
    //     case 1:
    //         cout << "January";
    //         break;
    //     case 2:
    //         cout << "February";
    //         break;
    //     case 3:
    //         cout << "March";
    //         break;
    //     case 4:
    //         cout << "April";
    //         break;
    //     case 5:
    //         cout << "May";
    //         break;
    //     case 6:
    //         cout << "June";
    //         break;
    //     case 7:
    //         cout << "July";
    //         break;
    //     case 8:
    //         cout << "August";
    //         break;
    //     case 9:
    //         cout << "September";
    //         break;
    //     case 10:
    //         cout << "October";
    //         break;
    //     case 11:
    //         cout << "November";
    //         break;
    //     case 12:
    //         cout << "December";
    //         break;
    //     default:
    //         cout << "Please enter a valid number";
    // }

    // char grade;

    // cout << "What letter grade?: ";
    // cin >> grade;

    // switch(grade){
    //     case 'A':
    //         cout << "You did great!";
    //         break;
    //     case 'B':
    //         cout << "You did good";
    //         break;
    //     case 'C':
    //         cout << "You did ok";
    //         break;
    // }

    // int grade = 75;

    // grade >= 60 ? cout << "Pass" : cout << "you fail";

    int number = 9;

    number % 2 == 1 ? cout << "odd" : cout << "even";














    
    return 0;
}