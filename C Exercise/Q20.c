#include<stdio.h>
/*Function with parameter without return type*/

void result(int marks){
    if(marks>=35){
        printf("pass");
    }else{
        printf("Fail");
    }

}
int main(){
    result(74);
    return 0;
}