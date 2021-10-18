#include <stdio.h>
int main(){
    float hour=0,wage=0,salary=0;
    printf("\nEnter for how many hours you worked this week : ");
    scanf("%f",&hour);
    printf("\nEnter for wage per hour : ");
    scanf("%f",&wage);
    if (hour<=30)
    {
        salary = (hour * wage); 
    }
    else if (hour>30){
        salary = ( 30 * wage ) + ((hour-30)*2.0*wage); 
    }
    else {
        printf("\nWork Hard");
    }
    printf("Your Salary : %0.0f\n",salary);
    return 0;
}