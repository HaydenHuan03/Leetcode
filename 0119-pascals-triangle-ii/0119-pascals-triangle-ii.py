class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        #first row
        targetRow = [1]

        #compute each row iteratively
        for i in range(1, rowIndex+1):
            targetRow = [1] + [targetRow[j] + targetRow[j+1] for j in range(len(targetRow)-1)] + [1]
        
        return targetRow