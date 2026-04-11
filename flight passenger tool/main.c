#include <stdio.h>
#include <string.h>
#include <libxml/parser.h> //baylar bu iki arkadaş bu şekil kullanılcak terminalden compile oluyor da vs code u ayarlayamadım hocanın yaptığı gibi siz ayarlarsınız belki.
#include <libxml/tree.h>

 typedef struct {
	char ticket_id[8];
	char timestamp[20];
    float baggage_weight;
    int loyalty_points;
    char status[20];
    char destination[31];
    char cabin_class[10];
    int seat_num;
    char app_ver[10];
    char passenger_name[100];
	//bunların boyutu değişebilir
} LogEntry;
 




int main(int num, char *argv[]){

	//USAGE INSTRUCTIONS
	if (strcmp(argv[1],"-h") == 0){
		printf("%s\n","nasıl kullanılcağına dair info");
	}




	//printf("%i\n",num); //böyle bişey olduğunu hatırlamak için bunlar kalsın
	//printf("%s",argv[2]);




    return 0;
}
