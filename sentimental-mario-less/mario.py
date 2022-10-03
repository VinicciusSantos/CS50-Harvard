# Recebendo um input do usuário
while True:
    try:
        height = int(input("Height: "))
        # Caso o número recebido seja válido prossiga para a linha 12
        if 1 <= height <= 8:
            break
    except:
        # Caso o dado recebido seja inválido, retorne para o início
        pass

for i in range(height):
    print(" " * (height - (i+1)) + "#" * (i+1))