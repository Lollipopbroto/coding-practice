class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        numbers = []
        total = 0

        for char in s:
            if char == "I":
                numbers.append(1)
            elif char == "V":
                numbers.append(5)
            elif char == "X":
                numbers.append(10)
            elif char == "L":
                numbers.append(50)
            elif char == "C":
                numbers.append(100)
            elif char == "D":
                numbers.append(500)
            elif char == "M":
                numbers.append(1000)
        
        for i in range(len(numbers)-1):
            if numbers[i] < numbers[i+1]:
                total -= numbers[i]
            else:
                total += numbers[i]
        
        total += numbers[len(numbers)-1]

        return total
