# matrix class

import random

class matrix(object):
    """Create, modify and observe a 3x3 list"""

    HORZ_SIZE = 3
    VERT_SIZE = 3

    def __init__(self):
        """create a 3x3 array setting stored values to a random int(0-9)"""
        self.theMatrix = [[]]*self.VERT_SIZE
        # for loop 1 will create another list
        for i in range(self.VERT_SIZE):
            self.theMatrix[i] = [0]*self.HORZ_SIZE
            # for loop 2 will populate the previously created list
            for j in range(self.HORZ_SIZE):
                self.theMatrix[i][j] = random.randint(0, 9)
    
    def __str__(self):
        """Print out 3x3 list"""
        for i in range(self.VERT_SIZE):
            print(self.theMatrix[i])
        return ""

    def __mul__(self, obj):
        """multiply 2 3x3 list together"""
        prodMatrix = [[]]*self.VERT_SIZE
        for x in range(self.VERT_SIZE):
            prodMatrix[x] = [0]*self.HORZ_SIZE
            for y in range(self.HORZ_SIZE):
                sum = 0
                for z in range(3):
                    sum += self.theMatrix[x][z] * obj.theMatrix[z][y]
                prodMatrix[x][y] = sum
        return prodMatrix
                    
    def __eq__(self, obj):
        """check if 2 3x3 list are equivalent"""
        flag = 0
        for x in range(self.VERT_SIZE):
            for y in range(self.VERT_SIZE):
                if(self.theMatrix[x][y] != obj.theMatrix[x][y]):
                    flag += 1

        if(flag > 0):
            return False
        else:
            return True