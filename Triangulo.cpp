#include <iostream>
#include <cstdio>
//Function to calculate fibonnachi.
unsigned fibonacchi(unsigned posicion)
{
    //fibonp1 stands for fibonnachi position 1, same with fibonp2.
    unsigned fibonP1 = 0;
    unsigned fibonP2 = 1;
    unsigned fibonResultante = 1;
    if (posicion == 1)
    {
        return fibonP1;
    }
    else if (posicion == 2)
    {
        return fibonP2;
    }
    else
    {
        //for loop to calculate all positions the user wants.
        for (unsigned F = 3; F <= posicion; F++)
        {
            fibonResultante = fibonP1 + fibonP2;
            fibonP1 = fibonP2;
            fibonP2 = fibonResultante;
        }
        return fibonResultante;
    }
}
unsigned Hosoya(unsigned Alto, unsigned Largo)
{
    //Hosoyas formula is H=fibonachi(i+1)*fibonacchi(n-i+1)
    unsigned Hosoyas = fibonacchi(Largo+1) * fibonacchi(Alto - Largo+2);
    return Hosoyas;
}
//function to calculate position.

void triangulo(unsigned nivel)
{
    //loop to make the triangle.
    for(unsigned alto = 1; alto <= nivel; alto++) {
        for(unsigned space=nivel-alto;space>0;space--){
            printf("    ");
        }
        for (unsigned largo = 1; largo <= alto; largo++) {
            //calling hosoyas fuction, the numbers will appear in a triangle.
            printf("%u      ", Hosoya(alto,largo));
        }
        printf("\n");
    
    }
}
int main()
{
    printf("cuantos niveles desea bro:\n");
    unsigned nivel = 0;
    scanf("%u", &nivel);
    triangulo(nivel);
    

    return 0;
}
