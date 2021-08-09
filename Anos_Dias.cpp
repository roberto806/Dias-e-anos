#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
 int dia,diaatual,mes,mesatual,ano,anoatual,totaldias;
int anos, meses, dias, diaano, diames;

printf("Digite o dia que você nasceu:\n");
scanf("%d",&dia);
printf("Digite o mes que você nasceu:\n");
scanf("%d",&mes);
printf("Digite o ano que você nasceu:\n");
scanf("%d",&ano);
printf("Digite o dia (data de hoje):\n");
scanf("%d",&diaatual);
printf("Digite o mês (data de hoje):\n");
scanf("%d",&mesatual);
printf("Digite o ano (data de hoje):\n");
scanf("%d",&anoatual); 
//total de anos vividos
anos=anoatual-ano;
// diaano é os anos multiplicados por 365 dias, mais os dias dos anos bissextos, obtido pelo resto a divisao por 4
diaano=(anos%4)+(anos*365);

if(mesatual>mes){
meses=mesatual-mes;
}
else {
meses=mes-mesatual;
}
// meses convertido em dias
diames=meses*30;

if(diaatual>dia){
dias=diaatual-dia;
}
else {
dias=dia-diaatual;
}
totaldias=diames+diaano+dias;
printf("Voce viveu: %d Dias",totaldias);
}

