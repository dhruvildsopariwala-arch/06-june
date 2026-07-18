#include <stdio.h>
#include <string.h>
int main(){
    /*
    strlen()  //to get a string length
    */
   char password[]="Admin123";

   printf("length of password is %d",strlen(password));

   if(strlen(password)>=8 && strlen(password)<16){
    printf("\n valid password length");
   }else{
        printf("\n not a valid password length");

    
    return 0;

   }
}