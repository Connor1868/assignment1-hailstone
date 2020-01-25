// Author / s : Connor Widder
// Serial Number / s : 75
// Due Date : 9/11/2019
// Programming Assignment Number 1
// Fall 2019 - CS 3358 - Section Number
//
// Instructor: Husain Gholoom.
//
// This program will ask for a interger then print out the hailstone squence from that starting number.
// The hailstone sequence will start by writing n. If n is even, then the next number is n/2. If n is odd
// then the next number is 3n + 1. Continue in this way until you write the number 1.

#include <iostream>
#include <sstream>


using namespace std;

void hailstone(int n);
int length (int n);
int evenCount(int n);
int largestNum(int n);


//*****************************************************************************************************
//main of the program that communicates to the user and calls the proper functions.
//*****************************************************************************************************
int main()
{
    int n;                              //interger value for the start of the hailston squence
    string in;                          //string value for the input from the user
    while(true){
        cout << "Please enter a integer: ";
        cin >> in;
        
        if (in == "n" ||in == "N" ){    //check if program was ended by user
            break;
        }
        stringstream input(in);         //convert user input value to interger
        input >> n;                     //set n equal to the converted interger
        
        cout << endl <<"The hailstone sequence starting at " << n << " is." << endl;
        
        hailstone(n);
        
        cout << endl << "The length of the sequence is " << length(n) << "." << endl;
        cout << evenCount(n) << " of the numbers are even." << endl;
        cout << "The largest number in the squence is " << largestNum(n) << "." << endl << endl;
    }
    return 0;
}
//*****************************************************************************************************
//This function will print out the numbers that are in the hailstone sequence.
//param 1 - n is the starting number of the hailstone sequence
//*****************************************************************************************************
void hailstone(int n){
    cout << n << " ";                   //print out the intial number in the hailstone sqeunce
    
    while(n>1){
        if(n % 2 == 0){                 //check if n is even
            n = n/2;                    //perform even hailstone sqeuence function
            cout << n << " ";           //print out the next number in hailstone sqeunce
        }else{          //n is odd
            n = 3*n + 1;                //perform odd hailstone sqeuence function
            cout << n << " ";           //print out the next number in hailstone sqeunce
        }
    }
}
//*****************************************************************************************************
//This function will return the length of the hailstone sequence,
//param 1 - n is the starting number of the hailstone sequence
//*****************************************************************************************************
int length(int n){
    int length = 1;
    while(n>1){
        if(n % 2 == 0){                 //check if n is even
            n = n/2;                    //perform even hailstone sqeuence function
            length++;                   //increment the length of sqeunce of counter
            
        }else{          //n is odd
            n = 3*n + 1;                //perform odd hailstone sqeuence function
            length++;                   //increment the length of sqeunce of counter
        }
    }
    return length;
}
//*****************************************************************************************************
//This function will return the number of even numbers in the hailstone sequence.
//param 1 - n is the starting number of the hailstone sequence
//*****************************************************************************************************
int evenCount(int n){
    int evenCount = 1;
    while(n>1){
        if(n % 2 == 0){                 //check if n is even
            n = n/2;                    //perform even hailstone sqeuence function
            evenCount++;                //increment the length of sqeunce of counter
            
        }else{          //n is odd
            n = 3*n + 1;                //perform odd hailstone sqeuence function
        }
    }
    return evenCount;
}
//*****************************************************************************************************
//This function will return the largest number in the hailstone sequence.
//param 1 - n is the starting number of the hailstone sequence
//*****************************************************************************************************
int largestNum(int n){
    int largestNum = n;
    while(n>1){
        if(n % 2 == 0){                 //check if n is even
            n = n/2;                    //perform even hailstone sqeuence function
        }else{                          //n is odd
            n = 3*n + 1;                //perform odd hailstone sqeuence function
            if (n > largestNum){        //Check if n is the new largest number
                largestNum = n;
            }
        }
    }
    return largestNum;
}




