

if __name__ == '__main__':

    casos = int(input())

    for i in range(0, casos):

        num = int(input())

        nomes = input()
        nomes = nomes.split(' ')

        lista = input()
        lista = lista.split(' ')

        for i in range(0, num):
            if(float(lista[i].count('A') / lista[i].count()) >= 0.75):
                print(nomes[i])
