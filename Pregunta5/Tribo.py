import time
import sys
from math import comb, log2
import numpy as np

def t(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        a, b, c = 1, 2, 3
        for _ in range(3, n):
            a, b, c = b, c, a + b + c
        return c
def nn(n, k):
    if k < 1 or k > n:
        return 0
    return (comb(n, k) * comb(n, k - 1)) // n
def t(n):
    if n == 1:
        return 1
    if n == 2:
        return 2
    T = np.matrix([[1, 1, 1], [1, 0, 0], [0, 1, 0]], dtype=object)
    result = np.linalg.matrix_power(T, n)
    return result[1, 0] + result[2, 0]

x = int(input())
sys.set_int_max_str_digits(1000000000)
start_time = time.time() 
print(t(int(log2(nn(x,int(log2(x)))))+1)) 
end_time = time.time()
print(end_time-start_time)