
if __name__ == '__main__':

    while(True):

        linha = input().split(' ')

        numA = linha[0]
        numB = linha[1]

        if(numA == '0' and numB == '0'):
            break

        numB = numB.replace(numA, '')

        if(numB == ""):
            numB = "0"
        
        print(int(numB))
