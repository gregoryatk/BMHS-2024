from collections import *
'''
For this problem. you are given a sorted list. You must go through and remove all of the duplicates from the list
It is not guarenteed that there will be a duplicate
return a sorted list without duplicates
Editing the list in place is not mandatory
only the library that is imported is allowed

Example 1:
[1,2,2,3,4,5]
Answer:
[1,2,3,4,5]
Example 2:
[1,2,3,4,5,5,5,5,6,7,10,10]
Answer
[1,2,3,4,5,6,7,10]

Suggested Approaches:
Iteration,Hash Set
'''

def main(TestList:list[int]) -> list[int]:
   #do your thing here
    pass
       


















































































































































from collections import Counter
def check():
    testcases = [[1,2,3,4,5,6],[7,9,10,11,15],[1,1],[1,2,3],[1,1,1,2,2,2,3,3,3],[1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,4]]
    for i in testcases:
        if main(i) == myown(i):
            pass
        else:
            return (f'''
Failed case {testcases.index(i)}.

Testcase:
{i}
Your Answer:
{main(i)}
Correct Answer:
{myown(i)}
''')
    return "You passed!"


def myown(listitem):
    c = dict(Counter(listitem))
    return list(c.keys())

if __name__ == "__main__":
    print (check())