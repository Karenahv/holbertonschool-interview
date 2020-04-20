#!/usr/bin/env python3
"""lockboxes"""


def check_array(boxes, j, i):
    """ check other box"""
    return (i in boxes[j] and i != j)


def canUnlockAll(boxes):
    """lockboxes"""
    for i in range(1, len(boxes) - 1):
        flag = 0
        for j in range(len(boxes)):
            flag = check_array(boxes, j, i)
            if flag:
                break
        if flag == 0:
            return False
    return True
