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
    def one_row_perimeter(self, line : list[int]) -> int:
        res = 0
        step = 2
        for num in line:
            if num == 1:
                res += step
                step = 0
            if num == 0:
                step = 2
        return res
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        res = 0
        for row in grid:
            res += self.one_row_perimeter(row)
        grid_transport = zip(*grid)
        for row in grid_transport:
            res += self.one_row_perimeter(row)
        return res
        

        
# @leet end
