#include<stdio.h>
#include<ctype.h>
#include<math.h>
main()

{
	char op;
	int num,num2;
	float resultado;
	
	
	printf("\n ===== MENU =====");
	printf("\n S - soma");
	printf("\n m - media");
	printf("\n r - raiz quadrada");
	printf("\n p - Potencia");
	printf("\n f - finalizar");
	printf("\nEntre com a opcao desejada:");
	fflush(stdin); // limpar o buffer para a leitura do caracter 
	scanf("%c",&op);
	op=toupper(op); //converter para maiusculo
	
	switch (op)
	{
	 case 'S': printf("\nEntre com o primeiro numero:");
	            scanf( "%d",&num);
	            printf("\nEntre com o segundo  numero:");
	            scanf( "%d",&num2);
	            resultado=num+num2;
	           printf("\n O resultado da soma eh =%.2d",resultado);
	           break;
			    
	 
	 case 'm':
	 
	 case 'r': printf("\nEntre com o numero:");
	           scanf("&d",&num);
               resultado=sqrt(num);
			   printf("\n O resultado da Raiz quadrada =%.2f",resultado);
			   break;   	 
	 case 'p':
	 
	 case 'f': printf("\n ====== FIM DO PROGRAMA ======");
	           break;
	 
	 default: printf("\n opcao invalida!!");	
		
		
		
		
	} 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
