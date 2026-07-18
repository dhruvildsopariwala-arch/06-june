#include<stdio.h>
#include<string.h>
int main(){
    char pass[]="admin";

    if(strcmp(pass,"admin")==0){
        printf("valid pass");
    }else{
        printf("invalid pass");
    }
    char otp[]="1234d";

    if(strcmp(otp,"1234d")==0){

        printf("valid otp");
    }
    return 0;
}