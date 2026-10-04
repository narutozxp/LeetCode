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
    def longestPalindrome(self, s: str) -> int:
        record = defaultdict(int)
        res = 0
        for c in s:
            if record[c] == 0:
                record[c] += 1
            else:
                record[c] -= 1
                res += 1
        res *= 2

        for value in record.values():
            if value != 0:
                res += 1
                break

        return res


        
# @leet end
