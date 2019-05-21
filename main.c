#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "editing.h"
#include "printing.h"
#include "adding.h"
#include "deleting.h"
#include "save_to_file.h"
#include "read_from_file.h"
#include "search.h"
#include <stdio.h>

void menu(); //!< funkcja, ktora sprawdza, jaka operacje uzytkownik chce aktualnie wykonac

char* contactsFilename = "contacts.txt"; /*!< sciezka pliku do zapisu/odczytu danych */
contact* contactHead = NULL; /*!< glowa listy kontaktow */

int main()
{
    contactHead = loadContactsFromAFile(contactsFilename);
    menu();

    return 0;
}

void menu(){
    while(1){
        printf("Wybierz co chcesz zrobic:\n");
        printf("1) Wyswietl kontakty\n");
        printf("2) Dodaj kontakt\n");
        printf("3) Usun kontakt\n");
        printf("4) Edytuj kontakt\n");
        printf("5) Szukaj \n");
        printf("0) Wyjdz\n");
        printf("Wybor: ");
        int wybor;
        scanf("%d", &wybor);

        getchar();

        if(wybor == 1)
            printAllContacts(contactHead);
        else if(wybor == 2){
            contactHead = addContact(contactHead);
            saveContacts(contactsFilename, contactHead);
        }
        else if(wybor == 3){
            contactHead = deleteContact(contactHead);
            saveContacts(contactsFilename, contactHead);
        }
        else if(wybor == 4){
            contactHead = editing(contactHead);
            saveContacts(contactsFilename, contactHead);
        }
        else if(wybor == 5){
            int choice;
            printf("What you want to search?\n[1]Name\n[2]Surame\n[3]City\n[4]Street\n[5]House number\n[6]Zip code\n[7]Post Office\n[8]Phone\n[9]E-mail\n");
            scanf("%d", &choice);

        if(choice==1){
            search_na(contactHead);}
        else if(choice==2){
            search_sur(contactHead);}
        else if(choice==3){
            search_c(contactHead);}
            else if(choice==4){
            search_str(contactHead);}
            else if(choice==5){
            search_hn(contactHead);}
            else if(choice==6){
            search_zC(contactHead);}
            else if(choice==7){
            search_pO(contactHead);}
            else if(choice==8){
            search_ph(contactHead);}
            else if(choice==9){
            search_em(contactHead);}
            else{
                printf("Wrong choice!");}
        }
        else if(wybor == 0)
            return;
        else printf("Wybrales niewlasciwa opcje!");

        printf("\n\n");
    }
}
