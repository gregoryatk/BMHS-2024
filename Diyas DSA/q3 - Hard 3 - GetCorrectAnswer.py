'''
You are given an equation which is a string.
You are also given a SORTED nums list.
You must replace the character X in the equation string with a number in nums
All occurances of the character X will be the same integer from nums 
You must return True if it is possible to create an equation that equals target
You must return false if it is impossible to create an equation that equals target
You must do every equation from left to right. Do not worry about the order of operations

(If this is confusing please refer to the examples or ask me for clarification)

>> CHALLENGE << 
Search the nums list in O(LOG(N)) time complexity 
(this means you are not allowed to search through every item in the list)
This is possible you dont have to brute force this trust me 

EXAMPLE 1:

equation = "X + X"
target = 4
nums = [1,2,3]

Answer:
True

EXAMPLE 2:
equation = 2 * X + 5
target = 14
nums = [1,5,10,15]

Answer:
False

Restrictions:
1 < len(nums) < 11
equation is guarenteed to have at least ONE occurence of target
Target will never be a negative number
There are no negative numbers present in the equation
Allowed operations = ["+","-","*"]


SUGGESTED METHODS:
STACK,TWO POINTERS, BINARY SEARCH TREE,
'''


def Solve(nums:list[int],target:int,equation:str) -> bool:
    pass
































































































def check():
    testcases = [[[1,2,3],4,"X + X"], #T
                 [[1,2,3],5,"X + X"], #F
                 [[2,5,10,15],6,"2 - X + 5"], #F
                 [[1,3,7,8,9,15,20], 246, "3 + X + X - 12 + X + X"], # F I think
                 [[1,2,3,4,5,6,7,8,9,10],25, "X * X - X"], # F
                 [[1,2,3,4,5,6,7,8,9,10],20, "X * X - X"], # T
                 [[1,10,100,1000],500,"5 * X"], # T
                 [[1,2,3,4,5],12,"4 + 4 + 4"], #mean testcase for anyone using .replace / T
                 [[1,2,3,4,5,6,7],10,"5 * X"] # T
                 ]
    x = 0
    for i in testcases:
        x+= 1
        if myown(nums=i[0],target=i[1],equation=i[2]) != Solve(nums=i[0],target=i[1],equation=i[2]):
            return f'''
                Failed Testcase {x}

                Testcase:
                    nums = {i[0]}
                    target = {i[1]}
                    equation = {i[2]}

                Your answer:
                {Solve(i[0],i[1],i[2])}

                Correct Answer:
                {myown(i[0],i[1],i[2])}
                '''
    return "You passed!"

def myown(nums:list[int],target:int,equation:str):
    r = len(nums) - 1
    l = 0 
    c = r//2 # create variables for BST
    a = 0 # answer variable
    ostack = [] # stack for all operators
    stack = [] # stack for all numbers and X
    operands = ["+","-","*"]
    for i in equation:
        if i in operands:
            ostack.append(i)
        elif i != " ":
            stack.append(i)
    # print (stack)
    # print (ostack)
    rr = len(stack)
    stack.extend(ostack)
    ll = 0
    while r > l:
        for i in range(len(stack)):
            queuedl = stack[ll] # put a pointer at the start of the number stack
            try:
                queuedr = stack[rr] # put a pointer at the start of the operator stack
            except:
                queuedr = None
            # easy
            if queuedl == "X":
                queuedl = nums[c]
            if i == 0:
                a += int(queuedl)
                ll += 1 
                continue
            if queuedr == "+":
                a += int(queuedl)
                ll += 1
            elif queuedr == "-":
                a += (int(queuedl) * -1)
                ll += 1
            else:
                a = a * int(queuedl)
                ll += 1
            
            if i == (len(stack) - len(ostack) - 1):
                break
            else:
                rr += 1
        
        if a == target:
            answer = nums[c]
            # print(answer)
            return True
        elif a > target:
            r = c
            c = r//2
        elif a < target:
            l = c+1
            t = (r - l)//2
            c = l + t
        a = 0
        ll = 0
        rr = len(stack) - 1
    return False            


            
    
        











if __name__ == "__main__":
    print(check())