// You are given an equation which is a string.
// You are also given a SORTED nums list.
// You must replace the character X in the equation string with a number in nums
// All occurances of the character X will be the same integer from nums 
// You must return 1 if it is possible to create an equation that equals target
// You must return 0 if it is impossible to create an equation that equals target
// You must do every equation from left to right. Do not worry about the order of operations

// (If this is confusing please refer to the examples or ask me for clarification)

// >> CHALLENGE << 
// Search the nums list in O(LOG(N)) time complexity 
// (this means you are not allowed to search through every item in the list)
// This is possible you dont have to brute force this trust me 

// EXAMPLE 1:

// equation = "X + X"
// target = 4
// nums = [1,2,3]

// Answer:
// 0

// EXAMPLE 2:
// equation = 2 * X + 5
// target = 14
// nums = [1,5,10,15]

// Answer:
// 1

// Restrictions:
// 1 < len(nums) < 11
// equation is guarenteed to have at least ONE occurence of target
// Target will never be a negative number
// There are no negative numbers present in the equation
// Allowed operations = ["+","-","*"]


// SUGGESTED METHODS:
// STACK,TWO POINTERS, BINARY SEARCH TREE

// Also big note for c++ you have to convert the numbers in the list to intergers.
// "why didnt you just make them intergers in the first place" I didnt feel like it.
// also you cant have two different types in a list
// thanks c++
// ¯\_(ツ)_/¯

// also also since apparently arrays are illegal here you have to recreate the list in your function
// Some smarty down there at c++ hq thought it was a good idea to make arrays linked lists ^.^

#include <array>
#include <string>
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;
bool compare(string string1, string string2);
bool lcompare(string string1[100], string string2);

int Solve(string nums[] ,int target ,string equation) {
    return 0;
}





















































































int mysolution( string nums[], int target, string equation) {
    int r = 0;
    string x;
    x = "";
    string remake[15] = {};
    string* temp;

    while (true)  {
        temp = (nums + r);
        if (*temp == "") {
            break;
        }
        else{
            remake[r].append(temp[0]);
            r++;
        }
    }

    r = 0;

    while (true) {
        try
        {
            x = remake[r];
            if (x == "") {
                break;
            }
            r++;
        }
        catch(const std::exception& e)
        {
            break;
        }
        
    };
    int l = 0;
    int c = r/2;
    int a = 0;
    string ostack[4] = {};
    string stack[12] = {};
    string operands[3] = {"+","-","*"};
    string temp1 = "";
    string val = "";
    string queuedl = "";
    string queuedr = "";
    int t;
    for (int i = 0; i < size(equation); i++) {
        // c++ mfs wanna be different so bad why is there no "in" command
        // can add the auto keyword, cannot add a simple comparison operator
        // Who made c++?
        // I want to hurt him now
        val = equation[i];
        

        if (lcompare(operands,val) == true) {
            ostack->append(val);
        }
        else if (val != " ") {
            stack->append(val);
        }
    }  

    int rr = size(stack[0]);
    int returnval = rr;
    
    for (int i = 0; i < size(ostack); i++) {
        stack->append(ostack[i]);
    }

    int ll = 0;
    int queued = 0;
    string hold;

    for (int i = 0; i < size(remake); i++) {
        int n;
        if (remake[i] != "") {
            n = stoi(remake[i]);
        }
        else {
            continue;
        }
        while (true) {
            if (ll == 0) {
                if (stack[0][ll] == 'X') {
                    a += n;
                } 
                else {
                    hold = stack[0][ll];
                    a = stoi(hold);
                }
                ll++;
            }
            else {
                if (stack[0][rr] != '+') {
                    if (stack[0][rr] != '-') {
                        if (stack[0][rr] != '*') {
                            break;
                        }
                    }
                }

                if (stack[0][ll] == 'X') {
                    queued = n;
                }
                else {
                    hold = stack[0][ll];
                    queued = stoi(hold);
                }

                if (stack[0][rr] == '+') {
                    a += queued;
                }
                else if (stack[0][rr] == '-') {
                    queued = (queued * -1);
                    a += queued;
                }
                else if (stack[0][rr] == '*' ) {
                    a = a * queued;
                }

                ll++;
                rr++;
                queued = 0;
            }
        }

        if (a == target) {
            return 1;
        }
        rr = returnval;
        ll = 0;
        a = 0;
    }

    // you know what if you want the """effecient""" answer look at python
    // I'm seconds away from a crashout because of this language
    // I've been doing this for FOUR HOURS collectively


    // while (r > l) {
    //     for (int i = 0; i < size(stack); i++) {
    //         queuedl = "";
    //         queuedl = stack[0][ll];
    //         try
    //         {
    //             queuedr = stack[rr];
    //         }
    //         catch(const std::exception& e)
    //         {
    //             queuedr = "!";
    //         }
    //         if (queuedl == "X") {
    //             queuedl = remake[c];
    //         }
    //         if (i == 0) {
    //             a += stoi(queuedl);
    //             ll++;
    //             continue;
    //         }
    //         if (queuedl == "-"||queuedl == "+"||queuedl == "*") {
    //             break;
    //         }
    //         if (queuedr == "+") {
    //             a += stoi(queuedl);
    //             ll++;
    //         }
    //         else if (queuedr == "-")
    //         {
    //             a += (stoi(queuedl) * -1);
    //             ll++;
    //         }
    //         else if (queuedr == "*") {
    //             a = a * stoi(queuedl);
    //             ll++;
    //         }
            
    //         if (i == (size(stack) - size(ostack) - 1)) {
    //             break;
    //         }
    //         else {
    //             rr++;
    //         }
    //     }

    //     if (a == target) {
    //         return 1;
    //     }
    //     else if (a > target) {
    //         r = c;
    //         c = floor(r/2);
    //     }
    //     else if (a < target) {
    //         l = c+1;
    //         t = floor((r-l)/2);
    //         c = l + t;
    //     }

    //     a = 0;
    //     ll = 0;
    //     rr = size(stack) - 1;
    // }
    return 0;
}

bool compare(string string1, string string2) {

    if (size(string1) != size(string2)) {
        return false;
    }

    for (int i = 0; i < size(string1); i++) {
        if (string1[i] != string2[i]) {
            return false;
        }
    }

    return true;
}

bool lcompare(string string1[100], string string2) {
    for (int i = 0; i < size(string2); i++) { // check the entire string
        // im only doing this because I have a very limited amount of options
        if (string2 == "-"||string2 == "+"||string2 == "*") {
                return true;
            }
    }

    return false;
    // size command doesnt work on a list im going to crash out
}

std::string check(){
    std::string testcases[9][3][10] = {{{"1","2","3"},"4","X + X"},{{"1","2","3"},"5","X + X"},{{"2","5","10","15"},"6","2 - X + 5"},{{"1","3","7","8","9","15","20"}, "246", "3 + X + X - 12 + X + X"},{{"1","2","3","4","5","6","7","8","9","10"},"25", "X * X - X"},{{"1","2","3","4","5","6","7","8","9","10"},"20", "X * X - X"},{{"1","10","100","1000"},"500","5 * X"},{{"1","2","3","4","5"},"12","4 + 4 + 4"},{{"1","2","3","4","5","6","7"},"10","5 * X"} };
    string temp1[15];
    string temp2;
    int temp2convert;
    string temp3;
    int Asolution;
    int Bsolution;
    for (int i = 0; i < size(testcases); i++) {
        for (int x = 0; x < size(testcases[i][0]); x++)  {
            temp1[x].append(testcases[i][0][x]); //creates the test1 list because apaprently I cant copy it
            if (temp1[x] == "") {
                break;
            }
        }

        temp2 = testcases[i][1][0];
        // for (int x=0; x < size(testcases[i][2]); x++ ) {
        temp3.append( testcases[i][1][1] );
        // }

        temp2convert = stoi(temp2);

        
        Asolution = mysolution(temp1 ,temp2convert,temp3);
        Bsolution = Solve(temp1,temp2convert,temp3);

        // std::cout << Asolution << std::endl;

        if (Asolution != Bsolution) {
            std::cout << "Failed Testcase " << i << std::endl;
            std::cout << "nums: " << temp1 << std::endl << "Target: " << temp2convert << std::endl << "equation: " << temp3 << std::endl;   
            std::cout << "Correct answer: " << std::endl << Asolution << std::endl;
            std::cout << "Your Answer: " << std::endl << Bsolution;
            return "";
        }
        

        for (int i = 0; i < size(temp1); i++) {
            temp1[i] = "";
            temp3 = "";
        }
    } 

    return "You passed!";
}

// let me check how many hours this took
// this took FIVE AND A HALF HOURS 
// God help us all

int main(){
    std::cout << check() << std::endl;
}