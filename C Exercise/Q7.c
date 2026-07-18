#include <stdio.h>

int main() {
    int Min_salary[4]={10000,1500,7000,9000};
    int ans;
    for(int  i=0;i<4;i++){
        if(ans>Min_salary[i])
        ans=Min_salary[i];
        
        
    }
    printf("\n%d Min Salary",ans);


    return 0;
}