
num = int(input())

for i in range (0, num):

    msn1 = input()
    msn2 = input()

    if(msn1 == msn2):
        print(f'Caso {(i+1)}:Yes')
    else:

        msn1 = msn1.replace(" ", "")
        msn2 = msn2.replace(" ", "")

        if(msn1 == msn2):
            print(f'Caso {(i+1)}:Output Format Error')
        else:
            print(f'Caso {(i+1)}:Wrong Answer')

