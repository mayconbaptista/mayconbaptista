

if __name__ == '__main__':

    num = int(input())

    for i in range(0, num):

        linha = input().split(' ')

        part1 = linha[0]
        part2 = linha[1]

        aux = part1[(len(part1) - len(part2)):]

        if(aux == part2):
            print("encaixa")
        else:
            print("nao encaixa")