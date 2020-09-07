'''
Given a non-empty array of integers, return the k most frequent elements.
'''

class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        import collections
        arr = [];
        c = collections.Counter(nums)
        result = c.most_common(k)
        for i in range(len(result)):
            arr.append(result[i][0])
        return arr
