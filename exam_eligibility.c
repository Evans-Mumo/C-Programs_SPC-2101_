//C Program
/*
Name: Evans Mumo
Reg no: CT100/G/26238/25
Description: Exam Eligibility 
*/

#include <stdio.h> //pre-processor directive

int main() {
    float attendance;
    float average_marks;

    //Get attendance percentage from the user
    printf("Enter student's attendance percentage: ");
    scanf("%f", &attendance);

    //Get average marks from the user
    printf("Enter student's average marks: ");
    scanf("%f", &average_marks);

    //Check eligibility conditions
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;

}

