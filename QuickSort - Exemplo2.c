
#include <iostream>
using namespace std;


void quickSort(int valor[], int esquerda, int direita)
{
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = valor[(esquerda + direita) / 2];

    while(i <= j)
    {
        while(valor[i] < x && i < direita)
        {
            i++;
        }
        while(valor[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = valor[i];
            valor[i] = valor[j];
            valor[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda)
    {
        quickSort(valor, esquerda, j);
    }
    if(i < direita)
    {
        quickSort(valor,  i, direita);
    }
}

int main(void)
{

	int i, ARRAY_SIZE, esq, dir;
    int array[ARRAY_SIZE];
    cout<<"Digite o tamanho da lista : ";
		 cin>>ARRAY_SIZE;

	for( i = 0; i < ARRAY_SIZE; i++)
	{
		 cout<<"Insira um numero inteiro : ";
		 cin>>array[i];
		 }

    cout<<"Digite o pivo da direita : ";
		 cin>>dir;
    cout<<"Digite o pivo da esquerda : ";
		 cin>>esq;

		quickSort(array, esq, dir);

		 System.pause();
		}
