'''
For this problem you are given a list with nine hundred ninety-nine million nine hundred ninety-nine thousand nine hundred ninety-eight characters and two numbers

The two numbers are guarenteed to be the same.

you ARE NOT allowed to iterate through every single item in the list

BTW this program takes 4GB of ram so if your computer has less than that then you might as well not try this 
'''


def Add_Two_Numbers(nums:list[str|int]) -> int:
    return 0













































































































































































































































def check():
    nums = ["a"] * 1_000_000_000
    nums[5000] = 2
    nums [9000] = 2
    if Add_Two_Numbers(nums) != 4:
        return '''
    Failed Testcase 1
    Not gonna elabroate on that 
    Try again
'''
    else:
        return ("You passed!")




if __name__ == "__main__":
    print (check())


'''
    h = set(nums)
    for i in h:
        if type(i) == int:
            return i + i
'''