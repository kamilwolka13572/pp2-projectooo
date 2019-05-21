#include "search.h"
#include "structures.h"

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LENGTH 128


int search_na(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->name, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_sur(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->surname, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_c(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->address, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_str(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->address, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_hn(contact* head)
{
    int id;
    int search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->address, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}


int search_zC(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->address, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_pO(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->address, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}

int search_ph(contact* head)
{
    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->phoneHead, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}


int search_em(contact* head)
{

    int id;
    char search[LENGTH];
    fflush(stdin);
    fgets(search, LENGTH, stdin);
    search[strcspn(search, "\r\n")] = 0;
    while(head)
    {
        if(strstr(head->emailHead, search))
        {
            id = head->ID;
            printf("Znaleziono w ID = %d \n", id);
            return id;
        }
        else
        {
            head = head->next;
        }
    }
    return -1;
}







