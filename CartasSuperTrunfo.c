#include<stdio.h>
//prototipo da funcao
float divisao(float a,float b);
float soma(float a,float b);

//implementação da função de soma

float soma(float a,float b){
return a+b;
}
//função principal
int main(){
   
   //====carta1====
   char estado[20];
   char codigo[20];
   char cidade[20];
   int populacao;
   float area;
   float pib;
   int pontosturisticos;
   float densidade_populacional;
   float pib_per_capita;
   float superpoder;

   printf("\n====carta1====\n");
   printf("digite seu estado:");
   scanf("%s",estado);
   
   printf("digite seu codigo:");
   scanf("%s",codigo);

   printf("digite sua cidade:");
   scanf("%s",cidade);
   
   printf("digite sua populacao(em mil pessoas):");
   scanf(" %d",&populacao);
   
   printf("digite sua area(em km²):");
   scanf(" %f",&area);
   
   printf("digite seu pib(em milhões):");
   scanf(" %f",&pib);
   
   printf("digite seus pontosturisticos:");
   scanf("%d",&pontosturisticos);

   //calculos intermediarios

   densidade_populacional=divisao(populacao,area);
   pib_per_capita=divisao(pib,populacao);
   
   //calculo superior: soma todos os dados numericos

   superpoder=(float)populacao+area+pib+(float)pontosturisticos+pib_per_capita;

   //saida dos calculos
   printf("pib-per-capita:%.2f\n",pib_per_capita);
   printf("superpoder:%.2f\n",superpoder);
   printf("densidade_populacional:%.2f\n",densidade_populacional);
   

   //====carta2====
   char estado2[20];
   char codigo2[20];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontosturisticos2;
   float densidade_populacional2;
   float pib_per_capita2;
   float superpoder2;

   printf("\n====carta2====\n");

   printf("digite seu estado2:");
   scanf("%s",estado2);
   
   printf("digite seu codigo2:");
   scanf("%s",codigo2);
   
   printf("digite sua cidade2:");
   scanf("%s",cidade2);
   
   printf("digite sua populacao2(mil pessoas):");
   scanf(" %d",&populacao2);
   
   printf("digite sua area2(em km²):");
   scanf(" %f",&area2);

   printf("digite seu pib2(em milhões):");
   scanf(" %f",&pib2);

   printf("digite seus pontosturisticos2:");
   scanf(" %d",&pontosturisticos2);

   //calculos intermediarios2

   densidade_populacional2=divisao(populacao2,area2);
   pib_per_capita2=divisao(pib2,populacao2);
   
   //calculo superior2: soma todos os resultados numericos

   superpoder2=(float)populacao2+area2+pib2+(float)pontosturisticos2+pib_per_capita2;

   //saida dos calculos

   printf("pib-per-capita2:%.2f\n",pib_per_capita2);
   printf("superpoder2:%.2f\n",superpoder2);
   printf("densidade_populacional2:%.2f\n",densidade_populacional2);

   //====saida formatada====
   printf("\n=============================================\n");
   printf("**Resumo das cartas**\n");
   printf("\n=============================================\n");

   printf("carta1:\n");
   printf("nome do estado:%s\n",estado);
   printf("seu codigo:%s\n",codigo);
   printf("sua cidade:%s\n",cidade);
   printf("sua populacao:%d mil pessoas\n",populacao);
   printf("sua area:%.2f km²\n",area);
   printf("seu pib:%.2f milhões de reais\n",pib);
   printf("seus pontosturisticos:%d\n",pontosturisticos);
   printf("sua densidade_populacional:%.2f hab/km²\n",densidade_populacional);
   printf("seu pib_per_capita:%.2f Reais\n",pib_per_capita);
   printf("seu superpoder:%.2f\n",superpoder);

   printf("\n=============================================\n");

   //carta2//

   printf("carta2:\n");
   printf("nome do estado2:%s\n",estado2);
   printf("seu codigo2:%s\n",codigo2);
   printf("sua cidade2:%s\n",cidade2);
   printf("sua populacao2:%d mil pessoas\n",populacao2);
   printf("sua area2:%.2f km²\n",area2);
   printf("seu pib2:%.2f milhões de reais\n",pib2);
   printf("seus pontosturisticos2:%d\n",pontosturisticos2);
   printf("sua densidade_populacional2:%.2f hab/km²\n",densidade_populacional2);
   printf("seu pib_per_capita2:%.2f Reais\n",pib_per_capita2);
   printf("seu superpoder2:%.2f\n",superpoder2);

   printf("\n=============================================\n");

   //Logica de comparação//
   printf("\n**comparação das cartas:**\n");
   
   char*vencedor;
   int populacaoA,areaB,pibC,pontosturisticosD,densidade_populacionalE,pib_per_capitaF,superpoderG;

    //populacao
    populacaoA = populacao>populacao2;
    vencedor=(populacao>populacao2)?"carta 1 venceu":
    ((populacao2>populacao)?"carta 2 venceu":"empate");
    printf("populacao:%s(%d)\n",vencedor,populacaoA);

    //area
    areaB = area > area2;
    vencedor =(area > area2) ?"carta 1 venceu":
    ((area2 > area) ?"carta 2 venceu":"empate");
    printf("area: %s (%d)\n",vencedor,areaB);

    //pib
    pibC = pib > pib2;
    vencedor =(pib > pib2) ? "carta 1 venceu":
    ((pib2 > pib) ? "carta 2 venceu":"empate");
    printf("pib: %s (%d)\n",vencedor,pibC);

    //pontosturisticos
    pontosturisticosD = pontosturisticos > pontosturisticos2;
    vencedor =(pontosturisticos > pontosturisticos2) ? "Carta 1 venceu" : 
    ((pontosturisticos2 > pontosturisticos) ? "Carta 2 venceu":"empate");
    printf("pontosturistico: %s (%d)\n",vencedor,pontosturisticosD);
    
    //densidade_populacional
    densidade_populacionalE = densidade_populacional > densidade_populacional2;
    vencedor =(densidade_populacional> densidade_populacional2) ? "Carta 1 venceu" : 
    ((densidade_populacional2 > densidade_populacional) ? "Carta 2 venceu":"empatre");
    printf("densidade_populacional: %s (%d)\n",vencedor,densidade_populacionalE);
   
    //pib_per_capita
    pib_per_capitaF = pib_per_capita > pib_per_capita2;
    vencedor =(pib_per_capita > pib_per_capita2) ? "Carta 1 venceu" : 
    ((pib_per_capita2 > pib_per_capita) ? "Carta 2 venceu":"empate");
    printf("pib_per_capita: %s (%d)\n",vencedor,areaB);

    //superpoder
    superpoderG = superpoder > superpoder2;
    vencedor =(superpoder > superpoder2) ? "Carta 1 venceu" : 
    ((superpoder2 > superpoder) ? "Carta 2 venceu":"empate");
    printf("superpoder: %s (%d)\n",vencedor,areaB);

   printf("\n=============================================\n");

   //logica if
   printf("\n**logica if**\n");

   if(populacao>populacao2){
   printf("populacao venceu parabens:\n");
   }else{
   printf("populacao2 venceu parabens:\n");
   }

   if(area>area2){
   printf("area venceu parabens:\n");
   }else{
   printf("area2 venceu parabens:\n");
   }

   if(pib>pib2){
   printf("pib venceu parabens:\n");
   }else{
   printf("pib2 venceu parabens:\n");
   }

   if(pontosturisticos>pontosturisticos2){
   printf("pontosturisticos venceu parabens:\n");
   }else{
   printf("pontosturisticos2 venceu parabens:\n");
   }
   
   if(densidade_populacional<densidade_populacional2){
   printf("densidade_populacional venceu parabens:\n");
   }else{
   printf("densidade_populacional2 venceu parabens:\n");
   }

   if(pib_per_capita>pib_per_capita2){
   printf("pib_per_capita venceu parabens:\n");
   }else{
   printf("pib_per_capita2 venceu parabens:\n");
   }

   if(superpoder>superpoder2){
   printf("superpoder venceu parabens:\n");
   }else{
   printf("superpoder2 venceu parabens:\n");
   }
   
   printf("\n======================================\n");
   
   return 0;
}
//imprementação da função de divisao
float divisao(float a,float b){
if(b==0){
printf("erro:divisao por zero!\n");

return 0;
   }
   return a/b;
}
