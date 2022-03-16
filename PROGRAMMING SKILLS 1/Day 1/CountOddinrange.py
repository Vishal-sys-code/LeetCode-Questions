#Link of the Problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        return int(((high + high%2)-(low - low%2))/2)
        