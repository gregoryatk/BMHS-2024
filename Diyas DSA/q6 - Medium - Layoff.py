'''
Imagine you are the CEO of apple. They're telling you that you're running in the red what do you do??!?!?!?
well instead of making 5$ less than the 5k you make an hour you're going to LAY OFF SOME PROGRAMMERS!!!!

You are given two lists

The list pay is a list of how much each programmer is paid
The list budget is how much you can afford to pay each programmer without losing your ability to buy your third yacht this year

The list budget is split into segments because uhh... budget reasons okay
You must return how many of the programmers you can afford to keep.
You must retain the ones with the greatest value because if they're paid more than surely they're useful for something

EXAMPLE 1:

Pay [5,10,3,4]
Budget [3,6,2]

Answer = 2 

EXAMPLE 2:

Pay [20,5,2,6,4,3]
Budget [9,12,15,1]

Answer = 5



> CHALLENGE <
Achieve O(N Log N + N + M) Time complexity 
Where N is the length of the pay list and M is the length of the budget list
'''

from natsort import natsorted
#run pip install natsort before running this program

def Corporate_Greed(Pay:list[int],Budget:list[int]) -> int:
    pass



































































































































































def check():
    testcases = [
        [[5,6,9,2,4],[5,15,25]],
        [[5,10,3,4],[3,6,2]],
        [[20,5,2,6,4,3],[9,12,15,1]],
        [[15,1],[4,1,3,2,5]],
        [[20,1,5,3],[20,1,2,4]],
        [[5,7,2,3],[5,3,4,2,1]],
        [[25],[5,2,3,6]]]
    x = 0
    for i in testcases:
        x+= 1
        if mysolution(i[0],i[1]) != Corporate_Greed(i[0],i[1]):
            return f'''
    Failed Testcase {x}
    You suck at firing people with families

    Tastcase:
        Pay {i[0]}
        Budget {i[1]}

    Your Answer: 
    {Corporate_Greed(i[0],i[1])}

    Correct Answer:
    {mysolution(i[0],i[1])}
'''

    return "You Passed!"


def mysolution(Pay,Budget):
    
    b = 0

    for i in Budget:
        b += i

    Pay = natsorted(Pay,reverse=True)

    a = 0 

    for i in Pay:
        b += -i
        if b > 0:
            a += 1
        else:
            break
    return a


    


if __name__ == "__main__":
    print(check())