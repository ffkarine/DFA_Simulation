Curso de Engenharia de Computação - Universidade Tecnológica Federal do Paraná (UTFPR) - Câmpus Toledo <br>
Disciplina de Teoria da Computação 2018.2 <br>
Karine Faggian Franciscon &
Gustavo Alexsandro de Lima <br>
Atividade Prática Supervisionada/Complemento de Carga Horária (APS/CCH)

# Simulador de Autômatos Finitos Determinísticos

**Instruções:**

A entrada deve se dar por um arquivo de texto chamado “entrada.txt” que deve ser colocado na mesma pasta que o executável.
A saída se dará também por um arquivo de texto, chamado “saida.txt”, a respectiva palavra de teste da entrada:
</br> "ACEITA" indica que a palavra é válida para o AFD.
</br> "REJEITA" indica que a palavra não é válida para o AFD.

**O arquivo de entrada deve estar organizado da seguinte forma:**

• Linha 1: Número de estados para o conjunto Q.

• Linha 2: Quantidade de elementos do alfabeto de entrada seguida dos mesmos, separados por um espaço. 

• Linha 3: Quantidade de estados finais seguida dos mesmos, separados por espaços.

• Linha 4: Número transições (σ) da máquina.

• Linha 5 em diante: Transições: Em cada linha deve constar uma σ, 
com seus elementos separados por um espaço. 
Ex.: “0 a 1” (estado de origem = “0”, letra a ser lida: “a” e estado de destino = “1”).

• Linhas após as transições: Número de palavras a serem testadas.

• Linha(s) seguinte(s): Palavras de entrada, uma por linha.

OBS.: Os estados sempre iniciam a contagem em 0, ou seja, se no autômato existem 5 estados, a contagem será de 0 à 4.
