
from array import array
from curses.ascii import isalpha

if __name__ == '__main__':

    while(True):

        try:
            num = int(input())
            arr = array()
            arr2 = array()
            max = 0

            for i in range(0, num):
                linha = input()
                for item in linha:
                    arr.append(item)
            
            if(len(arr2) > 0):
                

        except:
            break