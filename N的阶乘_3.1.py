'''
  作者：吕青松
  日期：2018.3.1
  题目链接：https://www.nowcoder.com/practice/f54d8e6de61e4efb8cce3eebfd0e0daa
'''

'''
  这道题用C++做确实是高精度乘法，如果可以用python的话可以直接做，因为python的整数自带高精度。
'''

n = int(input())
res = 1
for i in range(1, n+1):
    res *= i
print(res)