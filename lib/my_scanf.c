/*
** EPITECH PROJECT, 2023
** root [WSL: Debian]
** File description:
** my_scanf
*/

#include "../include/my.h"

void my_scanf(char *a; ...)
{
    int i = 0;
    int size = 0;
    int *addres;
    char temp_int;
    char temp_char;
    char *int_buffer;
    char *buffer_str = malloc(1024);
    char **addres_str = malloc(1024);
    void *pointer = &a;
    pointer += sizeof(a);


      while(a[size] != '\0'){
        if(a[size] == '%'){
          switch (a[size+1]){
            case 'd':
              read(0,int_buffer,1024);
              int_adres = (int*)(*((int**)pointer));
              *int_adres = myatoi(int_buffer,10);
              pointer += sizeof(int*);
              break;
            case 's':
              read(0,(*(char**)pointer),1024);
              pointer += sizeof(*(char**)pointer);
              break;
            case 'x':
              read(0,int_buffer,1024);
              int_adres = (int*)(*((int*)pointer));
              *int_adres = myatoi(int_buffer,16);
              pointer += sizeof(int*);
              break;
            case 'b':
              read(0,int_buffer,1024);
              int_adres = (int*)(*((int*)pointer));
              *int_adres = myatoi(int_buffer,2);
              pointer += sizeof(int*);
              break;
          }
        }
        size++;
      }
}

int myatoi(char read[], int base)
{
    int n = 0;
    int i = 0;
  
    while (readed[i] != '\0' && (readed[i] >= '0' && readed[i] <= '9') ||
    (readed[i] >= 'a' && readed[i] <= 'f')) {
        if(readed[i] >= 'a' && readed[i] <= 'f') {
            n = n * base + (readed[i] - 'a' + 10);
            } else {
                n = n * base + (readed[i] - '0');
                }
                i += 1;
                }
                return n;
}
