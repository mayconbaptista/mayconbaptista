def adapta_saida ():

    saida = open("./I/caso4/outUri.txt", "r")
    novo = open("./I/caso4/out.txt","w")

    for linha in saida:
        novo.write(linha.replace("Cidade","Bairro"))

    saida.close()
    novo.close()

def reverse ():

    novo = open("./I/caso4/out.txt","r")
    saida = open("./I/caso4/outReverse.txt", "w")

    for linha in novo:
            saida.write(linha.replace("Bairro", "Cidade"))

    novo.close()
    saida.close()

if __name__ == "__main__":

    adapta_saida()
    reverse()