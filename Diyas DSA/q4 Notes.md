NOTE: If you open this in VScode you can open a more readable formatted version of this file by holding CTRL + SHIFT + V

# Instructor Notes for q4 - Fizzbuzz

First: Read over the problem with everyone I'll copy it here

You are given a set of numbers from 1 through 100. 
for every number that can be divided by 3 replace it with the word "fizz"
for every number that can be divided by 5 replace it with the word "buzz"
if a number is divisible by 3 and 5 replace it with the word "fizzbuzz"
YOU MUST EDIT THE LIST IN PLACE - meaning you cannot return a new list

## So first, ask them how they think they should approach this problem

NOTE: This step should only be used for anyone who believes they need help. either with code (aside from how do you do xyz where xyz is like a specific code thing like how do I print hello world) or logic

Listen to everyones responses. Try to help them establish a logical connection on how a HUMAN would do it.

Some things they might come up with are:
* Checking if the number is divisible by 3 or 5
    * Maybe ask how they would check?
    * If they cannot think of any options and they are working with python inform them about //.
    * // will divide a number and assure that its an integer 
    * while / will divide a number and assure its a float
    * The difference between a float and an integer is that a float can have numbers in the decimal places while an integer can only be a whole number.
    
    if they're not using python feel free to tell them to google it
* I can think of any other ways for people to do it so you just gotta think fast :)

## After a little bit of time move into a solution
I'll write the code for the solution I came up with. I'll put comments so you can explain each line 
```
list1 = [] #create an empty list
list2 = [] #create an empty list

for i in range(-1,100,3): # loop through everything in the list starting at -1 adding by 3 until it reaches 100
    list1.append(i) # add i to the list1
for i in range(-1,101,5): # loop through everything in the list starting at -1 adding by 5 until it reaches 101
    list2.append(i) # add i to the list2


for i in range(len(TestList)): # go through the entirety of TestList
    stack = "" # create an empty stack variable
    if i in list1: # if I is in your list of things divisible by three
        stack+="fizz" # add fizz
    if i in list2: # if i is in your list of things divisible by five
        stack+="buzz" # add buzz
    if len(stack) != 0: #if the length of stack does not equal 0. if it does equal zero you dont want to replace the number
        TestList[i] = stack # set testlist[i] to the stack
``` 

## If you still have time + if you feel like it
Feel free to ask them how they could optimize this.

Remind them that the IN operator searches through every item in the list to check if its there

If you are given a list where each item is GUARENTEED to to be used in order, do you need to check all of the items in the list or do you just need to check the one relevant item 

You are trying to allude them to using a two pointer solution.
The only change they would have to make is making a left and a right pointer

Heres the new code

```
list1 = [] #create an empty list
list2 = [] #create an empty list
l = 1 # create a pointer at the 2nd value because the first value is -1
r = 1 # ditto

for i in range(-1,100,3): # loop through everything in the list starting at -1 adding by 3 until it reaches 100
    list1.append(i) # add i to the list1
for i in range(-1,101,5): # loop through everything in the list starting at -1 adding by 5 until it reaches 101
    list2.append(i) # add i to the list2

list1.append(" ")
list2.append(" ") # add a dummy value to the end of the list just to prevent the error 

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
``` 