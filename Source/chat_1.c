#include <stdio.h>
#include <unistd.h>
#include "Gps.c"

int main() {
    FILE *croq;
    FILE *gps_file;
    croq = fopen("Miam.txt", "a");
    gps_file = fopen("GPS.txt", "a");
    int sortie = 0;
   
    while(!sortie){
        system("clear");
        int choix = 0;
        int c;
          do{ 
            
            printf("choix action Chat 1(rentrez le numero correspondant):\n\n");
            printf("1 - Faire manger le chat\n");
            printf("2 - Faire partir le chat a l'aventure\n");
            printf("3 - fermer\n");
            
            scanf("%d",&choix);
            while ((c = getchar()) != '\n') { }
            
        }while(choix < 1 || choix > 3);
       
        switch(choix){
            case 1 : 
                
                fprintf(croq, "1\n");
                fflush(croq);
            break;
            case 2 : 
                gps(1, gps_file);
            break;
            case 3 : 
                sortie = 1;
                fclose(croq);
                fclose(gps_file);
            break;
        }
    }

    return 0;
}
