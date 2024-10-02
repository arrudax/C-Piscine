-------------------------------------
funcao matriz char* retorna char**:
verifica len = len(input)
alocar N len de char *
i = 0
LOOP
r[i] = linha N aloca len de char's 
i++;
len--
matrix : [
    ['1','0','0','0','\0'] 
    ['0','0','0','\0']
    ['2','0','\0',]
    ['4', '\0']
]

------------------------------
funcao busca char matrix retorna write:
input: matrix
verifica tamanho da row 
size = len(4)
verifaca se é tudo 0
    retorna
//em pesquisa
size row  > 2 : 
    separa char [0]
    dig name: busca char [0] : one
    mag: busca input que cabe : ['1', '0', '0', '0', '\0' ] com size para saber o '\0'    
        loop 0 :['1','0','0','\o']
        loop 1 :['1','0','0','0', '\o']
        loop 2 : break
    escrava : dig name, mag
size row > 0 e <= 2
    mag: busca exata de input ['2', '0', '\0' ] com size para saber o '\0'