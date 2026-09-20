#include <stdio.h>

int main() {
    int score;

    // Ask user for their score
    printf("Enter your score: ");
    scanf("%d", &score);
    if (score >= 90) {
    printf("Grade: B");
    }
    
   else if (score >= 80) {
    printf("Grade: B");
    }
    else if (score >= 70) {
    printf("Grade: C");
    }
   else if (score >= 60) {
    printf("Grade: D");
    }
   else {
    printf("Grade: F");
    }

    return 0;
}