#include<stdio.h>
#include<locale.h>

int procuraLinha(int L, int C, int mat[L][C], int proc)
{
	int i,j;
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if(mat[i][j] == proc) return i;
		}
	}
	return -1;
}

int procuraColuna(int L, int C, int mat[L][C], int proc)
{
	int i,j;
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if(mat[i][j] == proc) return j;
		}
	}
	return -1;
}

int main()
{
	int l,c,x;
	int A1[28][4], A2[28][4];
	//populando a tabela A1
	x=-3;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A1[l][c]=-1;
			else if(x<100) A1[l][c]=x;
			else if(x==100) A1[l][c]=0;
			else A1[l][c]=-1;
	//populando a tabela A2
	x=-19;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A2[l][c]=-1;
			else A2[l][c]=x;
	
	int B[28][12]=
{{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,6,2,4,0,2,5,1,3,6,1}};
	
	int C[6][7];
	//populando a tabela C
	x=1;
	for(l=0;l<6;l++)
		for(c=0;c<7;c++, x++)
			if(x>37) C[l][c]=-1;
			else C[l][c]=x;
	
	
	int dia, mes, ano, linha, resposta;
	
	printf("\nDigite a data no formato DD/MM/AAAA: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	if(ano <= 2000){ //ano até 2000, use tabela A1
		linha = procuraLinha(28, 4, A1, ano%100);
	}
	else{  //ano a partir de 2001, use tabela A2
		linha = procuraLinha(28, 4, A2, ano%100);
	}
	
	printf("\nLinha da tabela A = %d\n", linha);
	printf("\nValor da tabela B = %d\n",
		B[linha][mes-1]);
	
	resposta = procuraColuna(6,7,C,dia+B[linha][mes-1]);
	
	printf("\nResposta = %d\n", resposta);
	
	switch(resposta){
		case 0: printf("\nDomingo"); break;
		case 1: printf("\nSegunda-feira"); break;
		case 2: printf("\nTerça-feira"); break;
		case 3: printf("\nQuarta-feira"); break;
		case 4: printf("\nQuinta-feira"); break;
		case 5: printf("\nSexta-feira"); break;
		case 6: printf("\nSábado");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
