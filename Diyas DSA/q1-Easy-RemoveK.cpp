#include <iostream>
#include <string>
#include <string.h>
#include <array>
using namespace std;

// You are given a string of characters
// You must remove element k from the string 
// It is not guarenteed that k will be in the string
// Return the string without k


// EXAMPLE 1:
// string = "hello world"
// k = "l"

// answer: heo word

// EXAMPLE 2:
// string = "I hate leetcode"
// k = "e"

// answer: I hat ltcode

// Restrictions

// 0 < (k).length() < 2
// 1 < (TestString).length() < 50 
// Testlist only contains lowercase letters

std::string mysolution(string str, string k);
std::string check();
std::string removeKelements(string str, string k);

std::string removeKelements(string TestString, string k) {
    // Implement your solution here
    return "";
}














































































































































































std::string check() {
    string testcases[7][2] = {{"i hate leetcode","e"},{"hello world","l"},{"coding club","z"},{"python is great","t"},{"mr walther","r"},{"java sucks","a"},{"the quick brown fox jumps over the lazy dog","o"}};
    // string testcases[][2] = {{"hello world","o"}};
    string temp;
    string tempk;
    string Asolution = "";
    string Bsolution = "";
    for (int i = 0; i < size(testcases); i++) {
        temp = testcases[i][0];
        tempk = testcases[i][1];
        Asolution = mysolution(temp,tempk);
        Bsolution = removeKelements(temp,tempk);
        if (Asolution != Bsolution) {
            return "you failed a testcase but I dont want to say which one because that would lead to a compiler error";
        };
    };
    return "You passed!";
};

std::string mysolution(string str, string k) {
    string newstring;
    string temp;
    for (int i = 0; i < size(str); i++) {
        temp = str[i];
        if (temp != k) {
            newstring.append( temp );
        }
    }
    return newstring;
}


int main() {
    std::cout << check() << std::endl;
}


// string TestStringCopy = TestString;
//     string temp;
//     int removedcharacters = 0;
//     for (int i = 0; i < size(TestString); i++) {
//         temp = TestString[i];
//         if (temp == k) {
//             TestStringCopy = TestStringCopy.erase(i-removedcharacters,1);
//             removedcharacters++;
//         };
//     };
//     return TestStringCopy;

// I'm just saving this because this entire program took me like 2 days :sob: