#!/usr/bin/python3
"""Minumun operations"""


def minOperations(n):
    """num of operations for n H"""
    if n < 2 or type(n) is not int:
        return 0
    num_op = 0
    act = 1
    cpy_all = 0
    paste = 0

    while act != n:
        if n % act == 0:
            cpy_all = act
            paste = act + cpy_all
            num_op = num_op + 2
        else:
            paste = act + cpy_all
            num_op = num_op + 1

        act = paste

    return num_op
