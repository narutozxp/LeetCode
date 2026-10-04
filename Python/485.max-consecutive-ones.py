# @leet imports start
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
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        res = 0
        continues_num = 0
        for index, num in enumerate(nums):
            if num == 1:
                continues_num += 1
            else:
                res = res if res >= continues_num else continues_num
                continues_num = 0

        res = res if res >= continues_num else continues_num
        return res


            
            

        
# @leet end
