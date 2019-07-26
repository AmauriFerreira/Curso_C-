int main()
{
   int x, y, *p, *q;
	y = 19; printf("Valor de y = %d\n", y); //y=19
	
	p = &y; printf("Valor de p = %p\n", p); //p=endereço de y
	
	x = *p; printf("Valor de x = %d\n", x); //x=19]
	
	x = 7; printf("Valor de x = %d\n", x); //x=7
	
	(*p)++; printf("Valor de *p = %d\n", *p); //*p=20
	
	printf("Valor de y = %d\n", y); //y=20
	
	x--; printf("Valor de x = %d\n", x); //x=6
	
	(*p) = (*p) + x; printf("Valor de *p = %d\n", *p); //*p=26
	printf ("y = %d\n", y);
	printf("Valor de q = %p\n", q);//q ficou com lixo de memoria
	//q nao foi inicializado, portanto pode valer qualquer coisa
	*q = 10; //sist. op. bloqueia acesso indevido a memoria

	return 0;
}
