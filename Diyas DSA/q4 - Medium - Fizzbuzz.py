'''
You are given a set of numbers from 1 through 100. 
for every number that can be divided by 3 replace it with the word "fizz"
for every number that can be divided by 5 replace it with the word "buzz"
if a number is divisible by 3 and 5 replace it with the word "fizzbuzz"
YOU MUST EDIT THE LIST IN PLACE - meaning you cannot return a new list

EXAMPLE 1

n = 15
n[14] = fizzbuzz

EXAMPLE 2

n = 9
n[8] = fizz

EXAMPLE 3

n = 7
n[6] = 7

suggested approaches:
list comparison, check if float is an integer
'''

def FizzBuzz(TestList:list[int]) -> None: #REMEMBER TO EDIT THE LIST IN PLACE
    list1 = [] #create an empty list
    list2 = [] #create an empty list
    l = 1
    r = 1

    for i in range(-1,100,3): # loop through everything in the list starting at -1 adding by 3 until it reaches 100
        list1.append(i) # add i to the list1
    for i in range(-1,101,5): # loop through everything in the list starting at -1 adding by 5 until it reaches 101
        list2.append(i) # add i to the list2

    list1.append(" ")
    list2.append(" ")

    for i in range(len(TestList)): # go through the entirety of TestList
        stack = "" # create an empty stack variable
        if list1[l] == i: # if I is in your list of things divisible by three
            stack+="fizz" # add fizz
            l += 1 # move the pointer
        if list2[r] == i: # if i is in your list of things divisible by five
            stack+="buzz" # add buzz
            r += 1 # move the pointer
        if len(stack) != 0: #if the length of stack does not equal 0. if it does equal zero you dont want to replace the number
            TestList[i] = stack # set testlist[i] to the stack





































































































































































































































































def check(numbers):
    FizzBuzz(numbers)
    if numbers == mysolution():
        return "You Passed!"
    else:
        return f"""
Failed testcase 1
Your answer: 
{numbers}

Correct Answer: 
{mysolution()}

"""




def mysolution() -> list:
    numbers = list(range(1, 101))
    for i in range(len(numbers)):
        stack = ""
        hold = numbers[i]
        hold2 = (numbers[i]/3).is_integer()
        hold3 = (numbers[i]/5).is_integer()
        if (numbers[i]/3).is_integer() == True:
            stack += "fizz"
        if (numbers[i]/5).is_integer() == True:
            stack += "buzz"
        if len(stack) != 0:
            numbers[i] = stack
    return numbers






if __name__ == "__main__":
    numbers = list(range(1, 101))
    print (check(numbers))