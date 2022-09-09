

from math import ceil
import string
from datetime import date


if __name__ == '__main__':

    num = int(input())

    for i in range(0, num):

        lixo = input()
        data1 = input()
        data2 = input()

        data1 = list(map(int, data1.split('/')))
        data2 = list(map(int,data2.split('/')))

        data1 = date(data1[2], data1[1], data1[0])
        data2 = date(data2[2], data2[1], data2[0])

        resp = data1 - data2
        
        if(resp.days < 0):
            print("data de aniversário inválida")
        elif(ceil(resp.days // 365.25) > 130):
            print("verifique a data de aniversário")
        else:
            print(ceil(resp.days // 365.25))