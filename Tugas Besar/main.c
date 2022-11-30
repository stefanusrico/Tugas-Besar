#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "bruh.h"

int main(){
	system("COLOR 9");
    int menu;
    
    struct list kelas[3];
    	kelas[1].nama = "Low End Class";
    	kelas[2].nama = "Mid End Class";
    	kelas[3].nama = "High End Class";
    	
	struct list vendorCpu[2];
		vendorCpu[1].nama = "Intel";
		vendorCpu[2].nama = "AMD";
		
		
	struct list intelLow[7];
		intelLow[1].nama = "Intel";
		intelLow[2].nama = "Pentium G4400T";	
		intelLow[2].harga = 885000;	
		intelLow[3].nama = "Pentium G4560T";
		intelLow[3].harga = 995000;
		intelLow[4].nama = "Pentium G4600T";
		intelLow[4].harga = 1119000;
		intelLow[5].nama = "Pentium Gold G5600T";
		intelLow[5].harga = 1465000;
		intelLow[6].nama = "Intel Core i3-6100T";
		intelLow[6].harga = 1460000;
		intelLow[7].nama = "Intel Core i3-8100";
		intelLow[7].harga = 2155000;
		
	struct list amdLow[6];
		amdLow[1].nama = "Athlon 200GE";
		amdLow[1].harga = 1199000;
		amdLow[2].nama = "Athlon 240GE";
		amdLow[2].harga = 840000;
		amdLow[3].nama = "Athlon 300GE";
		amdLow[3].harga = 830000;
		amdLow[4].nama = "Athlon 3000G";
		amdLow[4].harga = 890000;
		amdLow[5].nama = "Ryzen 3 1200";
		amdLow[5].harga = 1260000;
		amdLow[6].nama = "Ryzen 3 2200G";
		amdLow[6].harga = 1699000;
		
	struct list intelLowMB[7];
		intelLowMB[1].nama = "Motherboard(LGA 1151)";
		intelLowMB[2].nama = "MSI H110M PRO-VDL";
		intelLowMB[2].harga = 940000;
		intelLowMB[3].nama = "ASROCK H110M PRO-VD PLUS";	
		intelLowMB[3].harga = 849000;	
		intelLowMB[4].nama = "MSI B250M BAZOOKA";	
		intelLowMB[4].harga = 2200000;	
		intelLowMB[5].nama = "MSI B360M GAMING PLUS";	//G5600 only works on 300 series motherboard (g5600t n 8100)
		intelLowMB[5].harga = 1570000;	//G5600 only works on 300 series motherboard (g5600t n 8100)
		intelLowMB[6].nama = "ASROCK Z170 Pro4";	
		intelLowMB[6].harga = 2005000;	
		intelLowMB[7].nama = "ASUS ROG STRIX Z370-H GAMING";	//300 series (g5600t n 8100)
		intelLowMB[7].harga = 3325000;	//300 series (g5600t n 8100)
		
	struct list amdLowMB[6];
		amdLowMB[1].nama = "Asus Prime A320M-F";
		amdLowMB[1].harga = 800000;
		amdLowMB[2].nama = "MSI Gaming A320M BAZOOKA";
		amdLowMB[2].harga = 1235000;
		amdLowMB[3].nama = "MSI ProSeries A320M PRO-M2";
		amdLowMB[3].harga = 785000;
		amdLowMB[4].harga = "Asus TUF GAMING B450M=PRO II";
		amdLowMB[4].harga = 1850000;
		amdLowMB[5].nama = "Asus Prime B450M-A II";
		amdLowMB[5].harga = 1280000;
		amdLowMB[6].nama = "Asrock B450 PRO4";
		amdLowMB[6].harga = 1395000;
		
	struct list intelMid [6];
		intelMid[1].nama = "Intel Core i5-8400";
		intelMid[1].harga = 2620000;
		intelMid[2].nama = "Intel Core i5-8500";
		intelMid[2].harga = 2550000;
		intelMid[3].nama = "Intel Core i5-8600";
		intelMid[3].harga = 2650000;
		intelMid[4].nama = "Intel Core i5-8600k";
		intelMid[4].harga = 3530000;
		intelMid[5].nama = "Intel Core i5-9400";
		intelMid[5].harga = 2520000;
		intelMid[6].nama = "Intel Core i5-9600k";
		intelMid[6].harga = 3515000; 
		
	struct list amdMid [6];
		intelMid[1].nama = "AMD Ryzen 5 2600";
		intelMid[1].nama = 2099000;
		intelMid[2].nama = "AMD Ryzen 5 3600";
		intelMid[2].nama = 3049000;
		intelMid[3].nama = "AMD Ryzen 5 3600x";
		intelMid[3].nama = 4049000;
		intelMid[4].nama = "AMD Ryzen 5 5500";
		intelMid[4].nama = 2230000;
		intelMid[5].nama = "AMD Ryzen 5 5600";
		intelMid[5].nama = 2590000;
		intelMid[6].nama = "AMD Ryzen 5 5600x";
		intelMid[6].nama = 3360000;
		
	struct list intelMidMB [6];
		intelMid[1].nama = "ASUS ROG MAXIMUS X APEX";
		intelMid[1].nama = 4770000;
		intelMid[2].nama = "MSI B360 Gaming Pro Carbon"; 
		intelMid[2].nama = 2005000;
		intelMid[3].nama = "Asus ROG STRIX H370-F";
		intelMid[3].nama = 2700000;
		intelMid[4].nama = "Asus PRIME H310M-C";
		intelMid[4].nama = 1120000;
		intelMid[5].nama = "ASRock B365M-HDV";
		intelMid[5].nama = 1100000;
		intelMid[6].nama = "Asus PRIME Z390-P";
		intelMid[6].nama = 2830000;
		
	struct list amdMidMB [6];
		intelMid[1].nama = "MSI B450 Gaming PRO Carbon AC";
		intelMid[1].nama = 3200000;
		intelMid[2].nama = "MSI MPG X570 Gaming Plus";
		intelMid[2].nama = 3160000;
		intelMid[3].nama = "NZXT N7 B550 Gaming";
		intelMid[3].nama = 2977000;
		intelMid[4].nama = "Gigabyte X570 UD";
		intelMid[4].nama = 2860000;
		intelMid[5].nama = "Biostar X370GT7";
		intelMid[5].nama = 2485000;
		intelMid[6].nama = "Asus TUF Gaming B550-PLUS";
		intelMid[6].nama = 3230000;
		
	struct list intelHigh [6];
		intelMid[1].nama = "Intel Core i7-6700k";
		intelMid[1].nama = 4560000;
		intelMid[2].nama = "Intel Core i7-7700";
		intelMid[2].nama = 4549000;
		intelMid[3].nama = "Intel Core i7-8086K";
		intelMid[3].nama = 7100000;
		intelMid[4].nama = "Intel Core i7-8700";
		intelMid[4].nama = 3250000;
		intelMid[5].nama = "Intel Core i7-7700K";
		intelMid[5].nama = 4999000;
		intelMid[6].nama = "Intel Core i7-9700";
		intelMid[6].nama = 4499000;
		
	struct list amdHigh [6];
		intelMid[1].nama = "AMD RYZEN 7 5800X";
		intelMid[1].nama = 4400000;
		intelMid[2].nama = "AMD RYZEN 7 5700X";
		intelMid[2].nama = 4100000;
		intelMid[3].nama = "AMD RYZEN 7 3800XT";
		intelMid[3].nama = 5849000;
		intelMid[4].nama = "AMD RYZEN 7 Pro 4750G";
		intelMid[4].nama = 5249000;
		intelMid[5].nama = "AMD RYZEN 9 5900X";
		intelMid[5].nama = 6420000;
		intelMid[6].nama = "AMD RYZEN 9 5950X";
		intelMid[6].nama = 8980000;

	struct list intelHighMB [6];
		intelMid[1].nama = "Supermicro C7Z270-CG-L";
		intelMid[1].nama = 2799000;
		intelMid[2].nama = "MSI Z390-A Pro";
		intelMid[2].nama = 2347000;
		intelMid[3].nama = "MSI Z370 Gaming Pro Carbon";
		intelMid[3].nama = 3330000;
		intelMid[4].nama = "MSI Z270 XPower Gaming Titanium";
		intelMid[4].nama = 4500000;
		intelMid[5].nama = "Asus TUF Z270 Mark 1";
		intelMid[5].nama = 3100000;
		intelMid[6].nama = "Asus ROG STRIX Z390-F Gaming";
		intelMid[6].nama = 4080000;

	struct list amdHighMB [6];
		intelMid[1].nama = "MSI X470 Gaming Pro Carbon";
		intelMid[1].nama = 3249000;
		intelMid[2].nama = "MSI MAG B550 Torpedo";
		intelMid[2].nama = 3205000;
		intelMid[3].nama = "Gigabyte X570 Aorus Ultra";
		intelMid[3].nama = 5898000;
		intelMid[4].nama = "Biostar Racing X470GT8";
		intelMid[4].nama = 2915000;
		intelMid[5].nama = "Asus TUF X470-Plus Gaming";
		intelMid[5].nama = 2725000;
		intelMid[6].nama = "Asus ROG STRIX X570-E Gaming WIFI II";
		intelMid[6].nama = 6250000;
		
	struct list ram [7];
		ram[1].nama = "RAM";
		ram[2].nama = "V-GeN Tsunami 16 GB DDR4 3000Mhz Dual";
		ram[2].harga = 888000;
		ram[3].nama = "ADATA XPG SPECTRIX RGB 16 GB DDR4 3000MHz Dual";
		ram[3].harga = 1641000;
		ram[4].nama = "GALAX GAMER II PLUS 16 GB DDR4 3000MHz Dual";
		ram[4].harga = 1080000;
		ram[5].nama = "GEIL EVO X II RGB LED 16 GB DDR4 3000MHz Dual";
		ram[5].harga = 1290000;
		ram[6].nama = "Gskill RipjawsV 16 GB DDR4 3000MHz Dual";
		ram[6].harga = 1131000;
		ram[7].nama = "GEIL AMD EDITION EVO X RGB 16 GB DDR4 2400MHz Dual";
		ram[7].harga = 2370000;
		
	struct list vga[7];
		vga[1].nama = "VGA";
		vga[2].nama = "Asus Geforce GT 1030 2GB GDDR5";
		vga[2].harga = 1409000;
		vga[3].nama = "Asus GTX 1050 Ti 4GB GDDR5";
		vga[3].harga = 2725000;
		vga[4].nama ="MSI GTX 1660 SUPER 6GB GDDR6";
		vga[4].harga = 3999000;
		vga[5].nama = "Colorful RTX 2060 6GB GDDR6";
		vga[5].harga = 5793000;
		vga[6].nama = "MSI RTX 3060 12GB GDDR6";
		vga[6].harga = 6990000;
		vga[7].nama = "Gigabyte RTX 3080Ti 12GB GDDR6X";
		vga[7].harga = 14980000;
		
    do{
     	awal:
        system("cls");
        header();
        printf("\n");
		menu_utama();
        printf("Enter choice: ");
		scanf("%d", &pilmenu);
		do{
			if(pilmenu == 6){
				exit(0);}
			if(pilmenu > 6 || pilmenu == 0){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
				null_number();
				goto awal;}
			} while (pilmenu == 6 || pilmenu == 0);
				loading();
		do{
			switch(pilmenu){
				case 1:
					bsdbdgt: 
						system("cls");
						header();
						menu_kelas(kelas);
						printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");
						scanf("%d",&pilkelas);
					do{
						if(pilkelas > 3){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
							null_number();
							header();
							menu_kelas(kelas);				//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
							printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");scanf("%d",&pilkelas);}
						if(pilkelas == 0){
							goto bsdbdgt;}}while(pilkelas > 3);
							break;
						
					case 2:
						rakit: 
						system("cls");
						header();
						menu_kelas(kelas);
						printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");scanf("%d",&pilkelas);
						do{
							if(pilkelas > 3){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
								null_number();
								header();
								menu_kelas(kelas);				//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
								printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");scanf("%d",&pilkelas);}
							if(pilkelas == 0){
								goto awal;}				
							if(pilkelas == 1){
								loading();
								
								vendorCpu:
								system("cls");
								header();
								menu_vendorCpu(vendorCpu);
								printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");scanf("%d",&pilvendorCpu);
							if(pilvendorCpu == 0){
								goto awal;}
							if(pilvendorCpu == 9){
								goto rakit;}
							if(pilvendorCpu > 2){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
								null_number();
								header();
								menu_vendorCpu(vendorCpu);				//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
								printf("\t\t\t\tChoose the CPU's vendor that you wanted : ");scanf("%d",&pilkelas);}			
							if(pilvendorCpu == 1){
								loading();
								intelLow:
								system("cls");
								header();
								menu_lowCpu(intelLow, amdLow);
								printf("\t\t\t\tChoose the CPU that you wanted : ");scanf("%d", &pilIntelLowCpu);
//							if(pilvendorCpu == 2){
//								}}while (pilvendorCpu = 1);		
							if(pilIntelLowCpu > 6){
								null_number();
								header();
								menu_lowCpu(intelLow);
								printf("\t\t\t\tChoose the CPU that you wanted : ");scanf("%d", &pilIntelLowCpu);}
							if(pilIntelLowCpu  == 9){
								loading();
								goto vendorCpu;}
							if(pilIntelLowCpu == 0){
								goto awal;}}while(pilIntelLowCpu > 6);
									
								mbintelLow:
								system("cls");
								header();
								menu_lowCpu(intelLowMB);
								printf("\t\t\t\tChoose the Motherboard that you wanted : ");scanf("%d", &pilintelLowMB);
							if(pilintelLowMB > 6){
								null_number();
								header();
								menu_lowCpu(intelLowMB);}	
								printf("\t\t\t\tChoose the Motherboard that you wanted : ");scanf("%d", &pilintelLowMB);
							if(pilintelLowMB == 0){
								goto awal;}
								}while(pilintelLowMB > 2);
								
								ram:
								system("cls");
								header();
								menu_lowCpu(ram);
								printf("\t\t\t\tChoose the Motherboard that you wanted : ");scanf("%d", &pilram);
								if(pilram  == 9){
								loading();
								goto vendorCpu;}
							if(pilram == 0){
								goto awal;}
								}while(pilram > 6);
								
								vga:
								system("cls");
								header();
								menu_lowCpu(vga);
								printf("\t\t\t\tChoose the Motherboard that you wanted : ");scanf("%d", &pilvga);
							if(pilram  == 9){
									loading();
									goto ram;}
							if(pilram == 0){
									goto awal;}
									}while(pilvga > 6);		
											    }while (pilintelLowMB = 1);													
}while (pilintelLowMB = 1);	
};
 
