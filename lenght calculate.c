#include<stdio.h>

#include"cs50.h"

int main(void){

      string name = get_string("typr : ");
      int lenght = get_lenght(name);
      printf("lenght: %i\n",lenght);
      
}
int get_lenght(string s){
      int i =0;
      while (s[i] != '\0')
      {
            i++;
      }
      return i;
}
