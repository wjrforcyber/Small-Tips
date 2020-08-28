class Solution(object):
    def judgeCircle(self, moves):
        import numpy as np
        """
        :type moves: str
        :rtype: bool
        """
        self_t = list(moves)
        a = np.unique(self_t);
        ###b = list(a)
        if len(a) == 0:
            return True
        b1 = 0
        b2 = 0
        b3 = 0
        b4 = 0
        for item in a:
            if item == 'U':
                b1 = moves.count(item)
            elif item == 'D':
                b2 = moves.count(item)
            elif item == 'L':
                b3 = moves.count(item)
            elif item == 'R':
                b4 = moves.count(item)

        ###if b1 == b2 and b1!=0 and b2!=0 and b3 == b4 and b3!=0 and b4!=0 :
        if b1 == b2 and b3 == b4 :
            return True
        else:
            return False
        