////Crie um algoritmo que leia 2 notas e mostre a media entre elas.//

#include <stdio.h>
#include <stdlib.h>

main (){
 float nota1, nota2, notaf;
 printf("Digite a primeira nota:\n");
 scanf("%f", &nota1);
 printf("Digite a segunda nota:\n");
 scanf("%f", &nota2);
 notaf = (nota1+nota2)/2;
 printf("A media das notas eh: %f", notaf);
}
