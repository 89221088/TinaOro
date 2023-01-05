#include <stdio.h>
#include <stdlib.h>

int ask(){
int floor;
printf("You are now on Ground floor. Select where you want to go. 0,1,2,3,4,5.");
scanf("%d",&floor);
return floor;
}

int leavingOrWhat() {
printf("Do you want to leave or? press 1 for leave, 0 for stay ");
int leave;
scanf("%d",leave ) ;
if (leave==1) {
    printf("Goodbye");
}
else if (leave==0){
    ask();


}
else {
    printf("Error.");
}



}

int main()
{
ask();
leavingOrWhat();

    return 0;
}
