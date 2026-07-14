#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][200] = {
        "What does CPU stand for?",
        "Which language is known as mother of all languages?",
        "What is the size of int in C (in bytes)?",
        "Which symbol is used for single line comment in C?",
        "What does RAM stand for?"
    };

    char options[5][4][50] = {
        {"A. Central Process Unit", "B. Central Processing Unit",
         "C. Computer Processing Unit", "D. Central Processor Unit"},
        {"A. Python", "B. Java", "C. C", "D. Assembly"},
        {"A. 2", "B. 4", "C. 8", "D. Depends on system"},
        {"A. ##", "B. //", "C. **", "D. --"},
        {"A. Random Access Memory", "B. Read Access Memory",
         "C. Random Actual Memory", "D. Read Actual Memory"}
    };

    char answers[5] = {'B', 'C', 'B', 'B', 'A'};

    int score = 0;
    char userAnswer;

    printf("=== C Programming Quiz ===\n");
    printf("5 questions - 1 mark each\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Q%d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < 4; j++)
            printf("%s\n", options[i][j]);
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);

        if (userAnswer == answers[i] || userAnswer + 32 == answers[i] + 32) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %c\n\n", answers[i]);
        }
    }

    printf("=== Quiz Complete ===\n");
    printf("Your score: %d / 5\n", score);

    if (score == 5) printf("Excellent! Perfect score!\n");
    else if (score >= 3) printf("Good job! Keep it up!\n");
    else printf("Keep practicing!\n");

    return 0;
}