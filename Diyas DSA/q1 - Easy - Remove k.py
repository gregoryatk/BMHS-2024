'''
You are given a string of characters
You must remove element k from the string 
It is not guarenteed that k will be in the string
Return the string without k
Refrain from using string.replace


EXAMPLE 1:
string = "hello world"
k = "l"

answer: heo word

EXAMPLE 2:
string = "I hate leetcode"
k = "e"

answer: I hat ltcod

Restrictions

0 < len(k) < 2
1 < len(TestString) < 50 
Testlist only contains lowercase letters
'''
# btw as a general note DO NOT rename the function given to you in the question.
def RemoveKelement(TestString:str,k:str) -> str:
    # Put your solution here 
    pass

















































































































































































import os
def check():
    testcases = [["i hate leetcode","e"],["hello world","l"],["coding club","z"],["python is great","t"],["mr walther","r"],["java sucks","a"],["the quick brown fox jumps over the lazy dog","o"]]
    for i in testcases:
        if mySolution(i[0],i[1]) != RemoveKelement(i[0],i[1]):
            return f'''
Failed Testcase {testcases.index(i)}

Testcase:
    TestString={i[0]}
    K={i[1]}

Your answer:
{RemoveKelement(i[0],i[1])}

Correct Answer:
{mySolution(i[0],i[1])}
'''
    if I_Told_You_I_Would_Check() == False:
        return "You passed!"
    else:
        return I_Told_You_I_Would_Check()

def mySolution(string,k):
    newstring = ""
    for i in string:
        if i != k:
            newstring += i
    return newstring

def I_Told_You_I_Would_Check() -> bool | str : 
    # I'm so typescriptcore
    with open(__file__,"r") as f:
        hold = f.readlines()
        # print(hold)
        i = 0
        # print ("import os" in hold[i] == False)
        while True:
            if ("import os" in hold[i]):
                break
            else:
                if ".replace(" in hold[i]:
                    return " \n Nice try nerd try the problem again without .replace() \n"
                i+=1
        return False

if __name__ == "__main__":
    print(check())