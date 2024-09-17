#include <stdio.h>

int main() {
    int math, phy, chem;
    int total, total_mp;

    // Input marks for the subjects
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);

    // Calculate the total marks
    total = math + phy + chem;
    total_mp = math + phy;

    // Output the calculated totals
    printf("Total marks of Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", total_mp);

    // Check eligibility based on the given criteria
    if ((math >= 65 && phy >= 55 && chem >= 50 && total >= 190) || total_mp >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
