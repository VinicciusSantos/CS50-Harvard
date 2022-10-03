moedas = [0.25, 0.1, 0.05, 0.01]
qtd_necessarias = 0

# Recebendo um input do usuário
while True:
    try:
        valor = float(input("Change owed: "))
        if (valor > 0):
            break
    except:
        # Caso o dado recebido seja inválido, retorne para o início
        pass

# Percorrendo a lista de moedas pra calcular os trocos e quantidades
for moeda in moedas:
    while valor // moeda > 0:
        qtd_necessarias += valor // moeda
        valor %= moeda
        valor = round(valor % moeda, 2)

# Retornando a quantidade de moedas necessárias
print(qtd_necessarias)