#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "bruh.h"
#include "menu.h"



void header(){					// ====> HEADER TOKO NYC! <==== //
	printf	("\t------------------------------------------------------------------------------------------------------------------\n");
  	printf	("\t->\t	OOOOOOOOOOO           OOOOOOOOOOOOO  	  OOOOOOOOOO    OOOOOOOOOO  OOOOO( (OOOOO\t\t<-\n");
 	printf	("\t->\t	OOOOOO,OOOOO*         OOOOOOOOOOOOO	OOOOOO  OOOOOO  OOOOOOOOOO  OOOOO( (OOOOO\t\t<-\n"); 
  	printf	("\t->\t	OOOOO/ OOOOOO            OOOOOO    	OOOOOO  OOOOOO  OOOOOO      OOOOO( (OOOOO\t\t<-\n");
  	printf	("\t->\t	OOOOO/ OOOOOO            OOOOOO    	OOOOOO  OOOOOO  OOOOOOOOOO  OOOOOOOOOOOOO\t\t<-\n");
  	printf	("\t->\t	OOOOO/ OOOOOO OOOOOOO    OOOOOO    	OOOOOO          OOOOOOOOOO  OOOOOOO(OOOOO\t\t<-\n");
  	printf	("\t->\t	OOOOO/ OOOOOO            OOOOOO    	OOOOOO  OOOOOO  OOOOOO      OOOOO( (OOOOO\t\t<-\n");
  	printf	("\t->\t	OOOOO/ OOOOO/            OOOOOO    	OOOOOO  OOOOOO  OOOOOOOOOO  OOOOO( (OOOOO\t\t<-\n");
  	printf	("\t->\t	OOOOOOOOOOO              OOOOOO      	  OOOOOOOOO    	OOOOOOOOOO  OOOOO( (OOOOO\t\t<-\n");
	printf	("\t==================================================================================================================\n");
}
void menu_utama(){
	printf("\t\t\t\t\t==================================================\n");
    printf("\t\t\t\t\t\t Computer Store Management System \n");
    printf("\t\t\t\t\t==================================================\n\n");
    printf("\t\t\t\t\t---------------------------------------------------\n");
    printf("\t\t\t\t\t||\t1. Based on your budget \t\t ||\n");
    printf("\t\t\t\t\t||\t2. Take New Computer Order\t\t ||\n");
    printf("\t\t\t\t\t||\t3. Modify Order List \t\t\t ||\n");
    printf("\t\t\t\t\t||\t4. Print the Receipt                 \t ||\n");
    printf("\t\t\t\t\t||\t5. Daily Summary of Total Sale \t\t ||\n");
    printf("\t\t\t\t\t||\t6. Exit\t\t\t\t\t ||\n");
    printf("\t\t\t\t\t---------------------------------------------------\n");
}


void null_number(){
	printf("Input yang anda masukkan tidak valid \n");
	system	("pause");
	system	("cls");
}

void loading(){										// ====>  Fitur tampilan loading  <==== //
	int i;
	system("cls");
	header();
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tWait a Minutes... \n\n\t\t\t\t");
	for (i=0; i<=65;i++){
		printf("%c",178);
		Sleep(15);
		}
}

void menu_kelas(struct list *kelas){			// ====>    DAFTAR MENU   <==== //
 	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|\t\t   1  \t   %s \t\t\t|\n",kelas[1].nama					  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   2. \t   %s \t\t\t|\n",kelas[2].nama 				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   3. \t   %s \t\t\t|\n",kelas[3].nama                   );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    puts	("\t\t\t\t|  << Main Menu (0)|                                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_vendorCpu(struct list *vendorCpu){			// ====>    DAFTAR MENU   <==== //
 	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|\t\t   1 \t   %s \t\t\t\t|\n",vendorCpu[1].nama					);
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   2. \t    %s \t\t\t\t|\n",vendorCpu[2].nama				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    puts	("\t\t\t\t|  << Back      (9)|                                            |");
    puts	("\t\t\t\t|  << Main Menu (0)|                                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_lowCpu(struct list *i){			// ====>    DAFTAR MENU   <==== //
 	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	printf	("\t\t\t\t|   Pilih Komponen %s yang diinginkan        |\n", i[1].nama);
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|   1  \t    %s \t\t %d|\n",i[2].nama, i[2].harga				 );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|   2. \t    %s \t\t\t %d|\n",i[3].nama, i[3].harga 				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|   3. \t    %s \t\t\t %d|\n",i[4].nama, i[4].harga				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|   4. \t    %s \t\t %d|\n",i[5].nama, i[5].harga			  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|   5. \t    %s \t\t %d|\n",i[6].nama, i[6].harga				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|   6. \t    %s \t\t %d|\n",i[7].nama, i[7].harga			  ); 
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    puts	("\t\t\t\t|  << Back      (9)|                                            |");
    puts	("\t\t\t\t|  << Main Menu (0)|                                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}