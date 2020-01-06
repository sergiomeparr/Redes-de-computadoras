#include<stdio.h>
#include<stdlib.h>

unsigned getbits(unsigned x, unsigned char p, unsigned char n)
{ 
    return x >> (p+1-n);
}

int main()
{
	char Clases[16] = {"AAAAAAAABBBBCCDE"};
    unsigned char direccion_ip;
    unsigned char a = 7, b = 4;
    printf("\nIntroduzca la direccion ip: ");
    scanf("%d", &direccion_ip);
    printf("La Direccion IP pertenece a la Clase: %c\n", Clases[getbits(direccion_ip,a,b)]);
    return 0;
}
