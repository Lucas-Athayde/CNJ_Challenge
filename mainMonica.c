#include <stdio.h>
#include <stdlib.h>

/* Nesta função iremos calcular a idade do 3 filho.
Nela, temos como parametro 3 valores, que serão 'monica', 'idade1' e 'idade2'
Sabemos que a soma dos 3 filhos é a idade de Dona Monica
Logo, precisamos pegar a idade dos 2 filhos e subtrair da idade de Monica, retornando a idade do 3 filho
*/
int idadeFilho3(int monica, int idade1, int idade2){
	
	//'idade3' recebe a subtração de 'monica' - 'idade do filho 1' - 'idade do filho 2'
	//E nos retorna o valor adquirido da operação
	int idade3;
	idade3 = (monica - idade1 - idade2);
	return idade3;
	
}

/*
Nesta função, temos 3 parametros, demos o nome para eles de 'a', 'b' e 'c'.
Criamos dentro da função uma variavel para receber o valor do comparativo, chamada 'maior'
*/
int maiorIdade(int a, int b, int c){
	
	int maior;
	
	
	if(a > b && a > c)				//Se A for maior que B e maior que C, logo, A será o maior valor
	{
		maior = a;
	}
	
	//Caso não seja A, iremos comparar B
	else if(b > a && b > c) 		//Se B for maior que A e maior que C, B é o maior valor dentre os 3
	{
		maior = b;
	}
	
	//Contudo, caso nenhuma das condições acima sejam cumpridas, nos resta dizer que C é o maior valor
	else{
		maior = c;
	}
	
	return maior;
}

int main()
{
    //Aqui declaramos as variaveis que irão armazenar as idades e demais valores em nosso programa.
    int filho1, filho2, filho3, M, idadeCalc;	
    
    /*
	Em nossa função Do While iremos repetir o processo caso a condição de idade de Dona Monica não seja cumprida, em que ela deve ser entre 40 e 110
    Caso ela não esteja entre esses valores, será pedido que o usuario coloque outro valor.
	*/
    do{
        printf("Qual a idade da Dona Monica? \n");
        scanf("%d", &M);
        
        
        if(M < 40 || M > 110) 		//Se Monica tiver menos que 40 anos ou mais do que 110, iremos repetir o laço ate que seja inserido que corresponda a nossa condição
        {
        printf("\nA idade da Dona Monica esta fora do limite..insira outro valor\n");
        
        }
        
    } while(M < 40 || M > 110);
    
    /*
	Neste laço de repetição entramos no mesmo conceito, contudo agora devemos ter a idade de um dos filhos
    não podendo ser MAIOR ou IGUAL a idade de Dona Monica e NEM MENOR que 1 ano de idade.
    Caso sejam cumpridas as condições, ele sai do loop e pula para o proximo passo.
	*/
    do
    {
        printf("Digite a idade do primeiro filho: ");
        scanf("%d", &filho1);
        if(filho1 > M) 				//Se a idade do filho1 for maior que de Monica, printamos o texto para o usuario e repetimos
		{
            printf("\n\nIdade do primeiro filho NAO pode ser MAIOR do que a idade de Dona Monica, insira outro valor..\n\n");
        }
        else if(filho1 == M)		//Se a idade do filho1 for igual a de Monica.
		{
            printf("\n\nIdade do primeiro filho NAO pode ser IGUAL a idade de Dona Monica, insira outro valor..\n\n");
        }
        else if(filho1 < 1)			//Se a idade for menor do que 1 ano de idade
		{
            printf("\n\nIdade do primeiro filho NAO pode ser MENOR que 1 ano de idade, insira outro valor..\n\n");
        }
        
    } while(filho1 < 1 || filho1 >= M );
    
    
    /*
	Enfim temos nosso terceiro laço de repetição Do While
    Faremos o mesmo processo, contudo agora sua idade não pode ser igual a do filho anterior(filho1)
    Então não pode ser MAIOR, IGUAL do que de Dona Monica, MENOR do que 1 e nem IGUAL a do outro filho.
	*/
    do
	{
		printf("Digite a idade do segundo filho: ");
		scanf("%d", &filho2);
    	if(filho2 > M) 				//Se a idade do filho2 for maior que de Monica.
		{
            printf("\n\nIdade do segundo filho NAO pode ser MAIOR do que a idade de Dona Monica, insira outro valor..\n\n");
        }
    	else if(filho2 == M)		//Se a idade do segundo filho for igual a de Monica
		{
            printf("\n\nIdade do segundo filho NAO pode ser IGUAL a idade de Dona Monica, insira outro valor..\n\n");
        }
        else if(filho2 < 1)			//Se a idade for menor do que 1 ano de idade
		{
            printf("\n\nIdade do segundo filho NAO pode ser MENOR que 1 ano de idade, insira outro valor..\n\n");
        }
        else if(filho2 == filho1)	// Se a idade do filho2 for igual a do filho1
		{
        	printf("\n\nIdade do segundo filho NAO pode ser IGUAL a do PRIMEIRO FILHO, insira outro valor..\n\n");
		}
        
    } while(filho2 < 1 || filho2 >= M || filho2 == filho1);
    
    /*
	Printamos os valores que inserimos no começo das operações
    Sendo o primeiro o valor da idade de Dona Monica
    E o segundo as idades de 2 dos filhos
	*/
    printf("A idade de Dona Monica e: %d\n", M);
    printf("e a idade de 2 dos filhos são: %d e %d",filho1,filho2);
    
    /*Aqui chamamos a função 'idadeFilho3' que esta lá em cima e armazenamos na variavel 'filho3'
    Passamos como parametro os valores adquiridos e informados anteriormente, 'M', 'filho1' e 'filho2'
	Com isto, retornamos o valor 'idade3' que foi calculado dentro da função e printado*/
    filho3 = idadeFilho3(M, filho1, filho2);
    printf("\n\nA idade do 3 filho e: %d anos\n\n ", filho3);
    
    /*
	Seguimos para o passo final que é retornar qual o filho mais velho dos 3.
    Para isto, temos a função 'maiorIdade', que recebe 3 parametros, sendo eles a idade dos 3 filhos
    'filho1', 'filho2' e 'filho3'.
    A explicação da função se encontra no inicio do codigo, onde a mesma foi criada	
	*/
    idadeCalc = maiorIdade(filho1, filho2, filho3);
    printf("O filho mais velho tem %d anos", idadeCalc);	//Printamos a maior idade dentre os 3 filhos de Dona Monica.
}

