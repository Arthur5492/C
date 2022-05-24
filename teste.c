#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>
int main(void){
  setlocale(LC_ALL, "portuguese");
char deb[10];
int cont=0, sim;
printf("Digite seu nome:");
scanf("%s",&deb);
printf("Carregando");
    /*while(cont++<=2){
      sleep(1);
      printf(".");
    }*/
printf("\n ---------------------------------------------------------//");
sleep(1);
printf("----------------------------------------------------------");
sleep(1);
printf("\n \n                            Seja bem vinda %s!!",deb);
printf("Você foi premiada com um ticket dourado!!! \n");
sleep(2);
  printf("                                                     .... \n");
  printf("                                                     ....\n");
  printf("                                                     ....   <-- 'Ticket' \n");
sleep(3);
    printf("Com ele você poderá ganhar até 5 prêmios!!");
    cont = 0; while(cont++<=1){sleep(1);printf(".");}
    sleep(2);printf(" \n Está pronta? "); sleep(2); printf("Digite:\n");sleep(2); printf("   1: Sim"); sleep(1); printf("\n   2: Não"); sleep(1);printf(" :( \n ");
    scanf("%s",&sim);
    sleep(2);
            printf("Computando resposta do côdigo"); sleep(2); printf(" (Pode demorar um pouco em gtx 1080 ruins)");
            cont = 0; while(cont++<=2){sleep(1);printf(".");}
            if (sim == 2) {printf(" \n Ah vai ganhar do mesmo jeito desgramada >:(");}
            else printf("\n Sim??"); sleep(1); printf("Então vamos aos prêmiosss!!");
            sleep(3);


        printf("\n \n                             Primeiro:"); sleep(2); printf("Um beijo na bochecha");

return 0;
}
//Abraço com massagem, Flor, beijo na boca, olhe para tras... anel.
