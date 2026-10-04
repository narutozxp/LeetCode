# @leet imports start
from re import T
from string import *
from re import *
from datetime import *
from collections import *
from heapq import *
from bisect import *
from copy import *
from math import *
from random import *
from statistics import *
from itertools import *
from functools import *
from operator import *
from io import *
from sys import *
from json import *
from builtins import *
import string
import re
import datetime
import collections
import heapq
import bisect
import copy
import math
import random
import statistics
import itertools
import functools
import operator
import io
import sys
import json
from typing import *
# @leet imports end

# @leet start
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        length = len(s)
        s_len = length // 2
        for d_len in range(1,s_len+1):
            if length % d_len != 0:
                continue
            left = d_len
            right = left + d_len
            res = True
            while(right <= length):
                if(s[0:d_len] != s[left:right]):
                    res = False
                    break
                left += d_len
                right += d_len
            if res == True:
                return True
        
        return False

            
        
# @leet end
