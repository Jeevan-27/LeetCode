class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        a = [x for x in nums if x > 0]
        b = [x for x in nums if x < 0]

        return max(len(a),len(b))