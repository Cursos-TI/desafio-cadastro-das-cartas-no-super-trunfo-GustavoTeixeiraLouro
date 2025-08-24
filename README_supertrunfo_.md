# Desafio Super Trunfo – Países 🃏
**Nível Novato – Cadastro Básico**

## 📋 Descrição
Este projeto implementa a primeira etapa do jogo **Super Trunfo – Países**, focado apenas no **cadastro de cartas**.  
As cartas representam cidades de diferentes estados, e no nível Novato o objetivo é apenas **ler e exibir os dados** cadastrados.  

- Cada estado tem quatro cidades.  
- Cada carta é identificada por um código (exemplo: `A01`, `B02`).  
- Foram cadastradas apenas **duas cartas** neste nível.  

## 🚩 Funcionalidades
- Cadastro de **duas cartas** via terminal, utilizando `scanf`.
- Cada carta possui os seguintes atributos:
  - Código (ex: `A01`)  
  - População (int)  
  - Área (float)  
  - PIB (float)  
  - Número de pontos turísticos (int)  
- Exibição dos dados cadastrados com `printf`.  
- Cada atributo é exibido em uma nova linha, de forma organizada.  

## ⚙️ Restrições do Nível Novato
- Não foram implementadas comparações ou cálculos.  
- Não há laços (`for`, `while`) ou condicionais (`if`, `else`).  
- Foco apenas em **entrada e saída de dados**.  

## 🖥️ Exemplo de Execução
```
=== Cadastro da Carta 1 ===
Código da carta (ex: A01): A01
População: 500000
Área (km^2): 350.5
PIB: 120.7
Número de pontos turísticos: 15

=== Cadastro da Carta 2 ===
Código da carta (ex: B02): B02
População: 300000
Área (km^2): 220.0
PIB: 95.3
Número de pontos turísticos: 10

--- Carta 1 ---
Código: A01
População: 500000
Área: 350.50 km^2
PIB: 120.70
Pontos turísticos: 15

--- Carta 2 ---
Código: B02
População: 300000
Área: 220.00 km^2
PIB: 95.30
Pontos turísticos: 10
```

## ⚙️ Como Compilar e Executar
### Linux / macOS
```bash
gcc -O2 -Wall -Wextra -std=c11 -o supertrunfo_novato supertrunfo_novato.c
./supertrunfo_novato
```

### Windows (MinGW)
```bash
gcc -O2 -Wall -Wextra -std=c11 -o supertrunfo_novato.exe supertrunfo_novato.c
supertrunfo_novato.exe
```
