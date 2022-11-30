	#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

#define APPDATA 20 //number of values in each of the arrays
    int proyect[APPDATA]={}; //empty arrays to define units as the program runs
    char nombre[APPDATA]={};
    int namecount[APPDATA]={};
    int proyects;
    int inv=3;
    char compare[5];

    string prearmados[APPDATA]={"CPU=Intel i3-3225 RAM=4gbMemory MOTHERBOARD=ASRock H77M m-ATX HDD=Hitachi 500GB","GPU=XFX 7850 CPU=Intel i5-7600 RAM=GSkill Memory 8GB MOTHERBOARD=ASRock H77M m-ATX HDD=Hitachi 1TB","CPU=Ryzen 7 3800x RAM=Corsair Vengeance Pro 16gb MOTHERBOARD=Asus B450f SSD=Samsung 970evo 1TB"}; //all default PC parts

    string inventario[APPDATA]={}; //array that saves the variables of CPU, RAM, MOTHERBOARDS and DISKS

    string gamas[APPDATA]={"low-end","mid-range","high-end"}; //array of the ranges(Budget)
    string CPU[APPDATA]={"intel core i3","AMD Athlon 3000g","Ryzen 7 3800x"}; //array of processors
    string RAM[APPDATA]={"4gbMemory","GSkill Memory 8gb","Corsair Vengeance Pro 16gb"}; //array of RAM modules
    string MOTHERBOARDS[APPDATA]={"ASRock H77M m-ATX","Asus Strix B450f","Asus Strix Z390"}; //array of the MOTHERBOARDS
    string DISCOS[APPDATA]={"Hitachi 500gb","Hitachi 1TB","Samsung 970evo 1TB"}; //discs array

    void newproyect(); //function that creates a new project
    void askprearm(); //function that gives the prearmed PC'S
    void listarinv(); //function that organizes the inventory following the arrays
    void start(); //function that starts the project

    int namebinary();//busqueda binaria de los proyectos previamente creados
    int askproyect();//funcion que pregunta los proyectos previamente creados

    void crearcomp(); //function that organizes the elements of previously created projects
    void oldproyect(); //function that organizes the elements of previously created projects
    void building(); //function that organizes the order of the project

int main(void)
{
    int op;
    int i;

    do
    {
        system("clear");
        printf("WELCOME TO PC'S CORP - ALWAYS AT YOUR SERVICES SINCE 2020＼( °□° )／!\n");

        printf("****** Do you want to build your new PC? With our page you will find the best option at the best price! ******\n");
        printf("1. Create a new project to build a PC!\n");
        printf("2. Add a new component to inventory\n");
        printf("3. Analyze projects already currently created\n");
        printf("4. Consult pre-assembled\n");
        printf("5. Check full inventory\n");
        printf("6. Check current projects\n");
        printf("7. PC'S CORP Program Credits\n");
        printf("8. Exit.\n");
        op=get_int("", "Enter an option from our Options Menu: ");
        switch(op)
        {
            case 1:
                newproyect(); //function that creates a new project
                getchar();
                break;
            case 2:
                crearcomp(); //function that adds a new component
                getchar();
                break;
            case 3:
                oldproyect();  //function that organizes the elements of previously created projects
                getchar();
                break;
            case 4:
                askprearm(); //function that gives the prearmed
                getchar();
                break;
            case 5:
                system("clear");
                printf("\t\t\t--------------------------------------\n");
                printf("\t\t\t    COMPLETE INVENTORY - PC'S CORP\n");
                printf("\t\t\t--------------------------------------\n");
                listarinv(); //function that organizes the inventory following the arrays
                getchar();
                break;
            case 6:
                system("clear");
                printf("***CURRENT PROJECTS***\n");
                proyects=namecount[proyects];
                i=namebinary(proyects);
                printf("The number of current projects in PC'S CORP are: %i",namecount[proyects]);
                printf("%s", nombre);
                printf("\n");
                printf("Press enter to continue:\n");
                getchar();
                break;
            case 7:
                system("clear");
                printf("***PC'S CORP 2020 BY DANIEL OLARTE***");
                printf("\n");
                printf("***Version June 2020 // ENGLISH VERSION***");
                printf("\n");
                printf("Press enter to continue:\n");
                getchar();
                break;
            case 8:
                printf("*-----You have left our page, have a nice day-----*\n");
                return 0;
            default:
                printf("*---Please enter an option given by the system, thank you very much---*");
                printf("\n");
                printf("Press enter to continue:\n");
                getchar();
        }
    }while(true);
    return 0;
}

void newproyect(void)
{
        system("clear");
        int op;
        int slen;

        printf("****************************************************************************************\n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("Welcome to the creation of PC's CORP projects, your best option to assemble your future components\n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("****************************************************************************************\n");

     printf("Enter the name of your project! (cannot exceed 10 letters):\n");
     scanf("%[^\n]s",nombre);

     slen = strlen(nombre);

     if(slen>10 || slen<1) //Verify if the name does not exceed 10 letters or is less than 0
     {
         printf("\n");
         printf("The project name entered is greater than the system limit, please try again\n");
         printf("Press ENTER to return to the main menu...\n");
         getchar();
     }
     else
     {
         system("clear");
         proyects++;
         namecount[proyects]=proyects;
         printf("Perfect! Let's start your %s from scratch to make it your own! (THE SERIAL NUMBER OF THIS PRODUCT IS %i)",nombre,namecount[proyects]);
         printf("\n");
         printf("1. Start building!\n");
         printf("2. See full list of components\n");
         printf("3. Delete projects\n");
         getchar();
         op=get_int("Enter an option from our Project Menu: ");
         switch(op)
         {
             case 1:
                 start(); //function that starts the project
                 getchar();
                 break;
             case 2:
                 listarinv(); //function that organizes the inventory following the arranys
                 break;
             case 3:
                 system("clear");
                 printf("Deleting...");
                 do
                 {
                    proyects--;
                 }while(namecount>0);
                 printf("All current projects have been deleted");
                 printf("\n");
                 printf("Press enter to continue:\n");
                 getchar();
                 break;
             default:
                 printf("*---Please enter an option given by the system, thank you very much---*");
                 printf("\n");
                 printf("Press enter to continue:\n");
                 getchar();
         }
     }
}

void listarinv(void)
{
    system("clear"); //organizo el inventario completo
    printf("----------------------------------- INVENTORY -----------------------------------\n");
    printf("CPU");
    printf("\n");
    printf("RAM");
    printf("\n");
    printf("MOTHERBOARDS");
    printf("\n");
    printf("DISKS");
    printf("\n");
    printf("----------------------------------------------------------------------------------\n");

    for(int i=0; i<inv; i++)
    {
     printf("CPU's: %s", CPU[i]);
     printf("\n");
     printf("RAM's: %s", RAM[i]);
     printf("\n");
     printf("MOTHERBOARDS: %s", MOTHERBOARDS[i]);
     printf("\n");
     printf("DISKS: %s", DISCOS[i]);
     printf("\n");
    }
    printf("\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Press enter to continue:\n");
}

void askprearm(void)
{
    system("clear");
    printf("********************************* Pre-build PC's *********************************\n");
    for(int i=0; i<inv; i++)
    {
      printf("Pre-build PC's: %s", prearmados[i]);
      printf("\n");
    }
    printf("----------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Press enter to continue:\n");
}

void start(void)
{
    char str[1];
    system("clear");
    printf("*******************************************\n");
    printf("Welcome to the build menu for your new PC!\n");
    printf("*******************************************\n");

    printf("\n");
    printf("Shall we start? (y/n)?");
    scanf("%s",str);
    if(!strcmp("y",str)) //verifico si el usuario dice yes o no
    {
        printf("¡Starting!");
        building();
        printf("\n");
    }
    else if(!strcmp("n",str))
    {
        system("clear");
        printf("Got it, apparently you don't want a project");
        printf("\n");
        printf("Press enter to continue:\n");
        getchar();
    }
    else
    {
        system("clear");
        printf("Got it, apparently you don't want a project");
        printf("\n");
        printf("Press enter to continue:\n");
        getchar();
    }
}

int namebinary(int num)
{
    int low,middle,high;
    bool found;

    low=0;
    high=proyects;
    found=false;
    while(low<=high)
    {
        middle=(high+low)/2;
        if(num==namecount[middle])
        {
            found = true;
            break;
        }
        else if (num<namecount[middle])
        {
            high=middle-1;
        }
        else
        {
            low=middle+1;
        }
    }
    //If it finds it, it returns the position where it is located and if it does not, it returns the value -1
    if (found==true)
    {
        return middle;
    }
    else
    {
        return -1;
    }
}

void crearcomp(void)
{
    string password;
    string newcpu, newram, newmother, newdisc;
    int op;

    system("clear");
    printf("This option is only available for the admin");
    printf("\n");
    password=get_string("Por favor ingrese la contraseña (es 12345): ");
    system("clear");

    if(strcmp(password, "12345")!=0) //Checks password
    {
        printf("The given password is not correct.\n");
        printf("Press enter to continue\n");
    }
    else
    {
        printf("----------------------------------------------------------------\n");
        printf("***** Welcome to the add components to inventory menu *****\n");
        printf("----------------------------------------------------------------\n");
        printf("\n");
        printf("1. Add a new component to inventory\n");
        printf("\n");
        op=get_int("Enter an option from our add to inventory menu: ");
        switch(op)
        {
            case 1:
                system("clear");
                printf("You have decided to add a new component to the inventory");
                printf("\n");
                newcpu=get_string("Enter the new CPU: ");
                CPU[inv]=newcpu;
                printf("\n");
                newram=get_string("Enter the new RAM module: ");
                RAM[inv]=newram;
                printf("\n");
                newmother=get_string("Enter the new MOTHERBOARD: ");
                MOTHERBOARDS[inv]=newmother;
                printf("\n");
                newdisc=get_string("Enter the new Disk: ");
                DISCOS[inv]=newdisc;
                inv++;
                printf("\n");
                printf("New component saved successfully");
                printf("\n");
                printf("Press enter to return to main menu");
                break;
            default:
                printf("*---Please enter an option given by the system, thank you very much---*");
                printf("\n");
                printf("Press enter to continue:\n");
                getchar();
        }
    }
}

void oldproyect(void)
{
    int actual;
    int i;
    system("clear");

    printf("********** BACK TO PREVIOUS PROJECTS **********\n");
    printf("\n");
    printf("The number of current projects in PC'S CORP are: %i", namecount[proyects]);
    printf("\n");
    printf("%s", nombre);
    printf("\n");

    actual=askproyect();
    i=namebinary(proyects);
    if(i!=-1)
    {
        printf("\n");
        printf("%s",CPU[i]);
        printf("\n");
        printf("%s", RAM[i]);
        printf("\n");
        printf("%s", MOTHERBOARDS[i]);
        printf("\n");
        printf("%s", DISCOS[i]);
        printf("\n");
    }
    else
    {
        printf("The requested project does not exist!\n");
    }
    printf("Press ENTER to continue...\n");
}

int askproyect(void)
{
    int i;

    do
    {
        i=get_int("Please select a number from the number of current projects (example: 1): ");

        if(i<0 || i>10)
        {
            printf("The current project number is not valid");
            printf("\n");
        }
    }while(i<0 || i>10);
    return i;
}

void building(void)
{
    system("cls");

    printf("\t\t\t---------------------------------\n");
    printf("\t\t\t---------------%s----------------\n",nombre);
    printf("\t\t\t---------------------------------\n");
    printf("\n");

    printf("Enter the range of your components (low-end, mid-range, high-end):\n");
    scanf("%s",compare);
    if(!strcmp("low-end",compare))
    {
        printf("\n");
        printf("intel core i3,4gbMemory,ASRock H77M m-ATX,Hitachi 500gb\n");
        printf("\n");
        printf("---The following settings are saved---");
    }

    if(!strcmp("mid-range",compare))
    {
        printf("\n");
        printf("AMD Athlon 3000g,GSkill Memory 8gb,Asus Strix B450f,Hitachi 1TB\n");
        printf("\n");
        printf("---The following settings are saved---");
    }

    if(!strcmp("high-end",compare))
    {
        printf("\n");
        printf("Ryzen 7 3800x,Corsair Vengeance Pro 16gb,Asus Strix Z390,Samsung 970evo 1TB\n");
        printf("\n");
        printf("---The following settings are saved---");
    }
}