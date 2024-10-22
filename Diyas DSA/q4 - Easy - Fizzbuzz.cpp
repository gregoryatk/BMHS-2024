
// You are given a set of numbers from 1 through 100. 
// for every number that can be divided by 3 replace it with the word "fizz"
// for every number that can be divided by 5 replace it with the word "buzz"
// if a number is divisible by 3 and 5 replace it with the word "fizzbuzz"

// EXAMPLE 1

// n = 15
// n[14] = fizzbuzz

// EXAMPLE 2

// n = 9
// n[8] = fizz

// EXAMPLE 3

// n = 7
// n[6] = "7"

// You must edit the list in place

// suggested approaches:
// list comparison, check if float is an integer

#include <string>
#include <iostream>
#include <string.h>


using namespace std;

void FizzBuzz(string* TestList) {
    int c = 0;
    int r = 1;
    int l = 1;

    string stack = "";

    while (c != 101) {
        if (l * 3 == c+1) {
            stack += "fizz";
            l++;
        }
        if (r * 5 == c+1) {
            stack += "buzz";
            r++;
        }

        if (size(stack) != 0) {
            TestList[0] = stack;
        }
        c++;
        TestList += 1;
        stack = "";
    }

}



















































































































void check() {
    std::string answer[100] = {"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz", "11", "fizz", "13", "14", "fizzbuzz", "16", "17", "fizz", "19", "buzz", "fizz", "22", "23", "fizz", "buzz", "26", "fizz", "28", "29", "fizzbuzz", "31", "32", "fizz", "34", "buzz", "fizz", "37", "38", "fizz", "buzz", "41", "fizz", "43", "44", "fizzbuzz", "46", "47", "fizz", "49", "buzz", "fizz", "52", "53", "fizz", "buzz", "56", "fizz", "58", "59", "fizzbuzz", "61", "62", "fizz", "64", "buzz", "fizz", "67", "68", "fizz", "buzz", "71", "fizz", "73", "74", "fizzbuzz", "76", "77", "fizz", "79", "buzz", "fizz", "82", "83", "fizz", "buzz", "86", "fizz", "88", "89", "fizzbuzz", "91", "92", "fizz", "94", "buzz", "fizz", "97", "98", "fizz", "buzz"};
    std::string numbers[100] = {
        "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
        "11", "12", "13", "14", "15", "16", "17", "18", "19", "20",
        "21", "22", "23", "24", "25", "26", "27", "28", "29", "30",
        "31", "32", "33", "34", "35", "36", "37", "38", "39", "40",
        "41", "42", "43", "44", "45", "46", "47", "48", "49", "50",
        "51", "52", "53", "54", "55", "56", "57", "58", "59", "60",
        "61", "62", "63", "64", "65", "66", "67", "68", "69", "70",
        "71", "72", "73", "74", "75", "76", "77", "78", "79", "80",
        "81", "82", "83", "84", "85", "86", "87", "88", "89", "90",
        "91", "92", "93", "94", "95", "96", "97", "98", "99", "100"
    };
    bool flag = false;

    FizzBuzz(numbers); // this should call the function while the function points at the array
    
    for (int i = 0; i < size(numbers); i++) {
        if (numbers[i] != answer[i]) {
            flag = true;
        }
    }

    if (flag == true) {
        std::cout << "No way you failed fizzbuzz" << std::endl;
    }
    else {
        std::cout << "You passed!" << std::endl;
    }
}


int main() {
    check();
}