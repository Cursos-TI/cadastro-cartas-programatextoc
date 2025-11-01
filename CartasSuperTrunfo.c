#include<stdio.h>
//prototipo da funcao
float divisao(float a,float b);

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

   densidade_populacional=divisao(populacao,area);
   pib_per_capita=divisao(pib,populacao);
   
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

   densidade_populacional2=divisao(populacao2,area2);
   pib_per_capita2=divisao(pib2,populacao2);

   //====saida formatada====
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



 
