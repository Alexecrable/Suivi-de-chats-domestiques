#include "Gps.h"
#include <stdlib.h>
void gps(int id, FILE* gps_file){

        int choix = 0;
        int c;
          do{ 
            
            printf("choix du trajet (1 ou 2):\n\n");
            
            scanf("%d",&choix);
            while ((c = getchar()) != '\n') { }
            
        }while(choix !=1 && choix != 2);

    if(choix == 1){
        fprintf(gps_file, "[43.316777,-0.353096]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.316107,-0.353331]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.315320,-0.353690]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.314987,-0.351940]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.314261,-0.351776]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.314542,-0.353257]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.3147377,-0.3543724]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.3153688,-0.3555674]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.3162467,-0.3545880]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.317113,-0.353986]%d\n", id);
        sleep(2);
        fflush(gps_file);
    }
    else{
        fprintf(gps_file, "[43.317451,-0.355342]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.315551,-0.356644]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.3148628,-0.3571994]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.315122,-0.354841]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.315796,-0.353793]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.31628,-0.352839]%d\n", id);
        sleep(2);
        fflush(gps_file);
        fprintf(gps_file, "[43.317113,-0.353986]%d\n", id);
        sleep(2);
        fflush(gps_file);
        
    }
         
}