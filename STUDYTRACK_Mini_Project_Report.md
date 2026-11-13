MINI PROJECT REPORT

STUDYTRACK – SMART STUDY TIME ANALYZER

Submitted by: Gurkirat Singh
Course: BCA – Data Science
Semester: 1st Semester
Subject: C Programming
University: Chandigarh University
Academic Session: 2026–2027

⸻

1. ABSTRACT

STUDYTRACK – Smart Study Time Analyzer is a simple C programming mini project designed to help students understand and analyze their daily study hours.

The program allows users to enter the names of three subjects and the number of hours spent studying each subject. It then calculates the total study time, average study time, and identifies the subject that received the maximum study hours.

The project is developed using basic C programming concepts such as arrays, loops, conditional statements, variables, and arithmetic operators. It is beginner-friendly and demonstrates how programming can be used to solve a simple real-life problem.

2. INTRODUCTION

Time management is an important part of student life. Students often study different subjects but may not keep track of how much time they spend on each one.

STUDYTRACK provides a simple solution to this problem. It records study hours for three subjects and generates a small report based on the entered information.

The main purpose of this project is to apply basic C programming concepts to a practical situation. It also helps students understand how programs accept input, process data, and display meaningful output.

Objectives

1. To develop a simple study-time tracking program.
2. To calculate total and average study hours.
3. To identify the subject receiving the most study time.
4. To understand the use of arrays and loops in C.
5. To apply programming concepts to a real-life problem.

Techniques Used

* Variables and data types
* One-dimensional arrays
* Two-dimensional character arrays
* For loops
* If-else statements
* Arithmetic operators
* Input and output functions

3. SYSTEM REQUIREMENTS

Hardware Requirements

* Computer or laptop
* Minimum 2 GB RAM
* Keyboard and monitor
* Basic processor

Software Requirements

* Operating System: Windows, Linux or macOS
* Programming Language: C
* Compiler: GCC or any standard C compiler
* Editor: VS Code, Code::Blocks or any text editor

4. PROJECT SUMMARY

Input

The program asks the user to enter:

* Names of three subjects.
* Study hours spent on each subject.

Processing

The program performs the following operations:

1. Accepts subject names and study hours.
2. Calculates the total study hours.
3. Calculates the average study hours.
4. Compares the study hours of all three subjects.
5. Finds the subject with the highest study time.
6. Displays a performance message.

Output

The program displays:

* All entered subject names.
* Study hours for each subject.
* Total study hours.
* Average study hours.
* Most studied subject.
* A simple study performance message.

5. WORKING AND FLOWCHART

Working of the Project

The program starts by displaying its title. It then asks the user to enter three subject names and their respective study hours.

After collecting the information, it calculates the total and average study hours. It compares the entered values to find the subject with the highest study time.

Finally, the program displays the complete study report and gives a simple message based on the total study hours.

Flowchart

        START
          |
          v
   Display Project Title
          |
          v
 Enter Three Subject Names
          |
          v
 Enter Study Hours
          |
          v
 Calculate Total Hours
          |
          v
 Calculate Average Hours
          |
          v
 Find Highest Study Hours
          |
          v
 Display Study Report
          |
          v
 Check Total Study Hours
          |
          v
 Display Performance Message
          |
          v
         STOP

6. SAMPLE OUTPUT

================================
       STUDYTRACK ANALYZER
================================
Enter subject 1: C
Enter study hours: 2
Enter subject 2: Maths
Enter study hours: 3
Enter subject 3: English
Enter study hours: 2
--------------------------------
          STUDY REPORT
--------------------------------
Subject       Study Hours
C             2.00
Maths         3.00
English       2.00
Total Study Hours: 7.00
Average Study Hours: 2.33
Most Studied Subject: Maths
Performance: Great job! Keep it up.
================================

7. RESULT

The STUDYTRACK project was successfully developed using the C programming language.

It accepts study information for three subjects and calculates the total and average study hours. It also identifies the subject receiving the maximum study time.

The project demonstrates the practical use of arrays, loops, conditional statements, and arithmetic operations.

8. ADVANTAGES

1. Easy to understand and operate.
2. Helps students track study time.
3. Uses basic programming concepts.
4. Provides quick calculations.
5. Requires very little system memory.

9. LIMITATIONS

1. The program accepts only three subjects.
2. Study information is not saved permanently.
3. It does not provide graphical reports.
4. It does not automatically track study time.

10. FUTURE SCOPE

The project can be improved in the future by:

1. Adding more subjects.
2. Saving study records in a file.
3. Generating weekly and monthly reports.
4. Adding a graphical user interface.
5. Comparing study hours across different days.

11. CONCLUSION

STUDYTRACK – Smart Study Time Analyzer is a beginner-level C programming project that connects programming with everyday student life.

It provides a simple way to calculate and understand study-time distribution. Through this project, basic C programming concepts were applied to solve a practical problem.

This project also builds a foundation for developing more advanced applications involving data storage, data analysis, and time management.

12. SOURCE CODE

#include <stdio.h>
int main()
{
    char subject[3][30];
    float hours[3], total = 0, average;
    int i, highest = 0;
    printf("================================\n");
    printf("       STUDYTRACK ANALYZER\n");
    printf("================================\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter subject %d: ", i + 1);
        scanf("%29s", subject[i]);
        printf("Enter study hours: ");
        scanf("%f", &hours[i]);
        total = total + hours[i];
    }
    average = total / 3;
    for(i = 1; i < 3; i++)
    {
        if(hours[i] > hours[highest])
        {
            highest = i;
        }
    }
    printf("\n--------------------------------\n");
    printf("          STUDY REPORT\n");
    printf("--------------------------------\n");
    printf("\nSubject\t\tStudy Hours\n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t\t%.2f\n", subject[i], hours[i]);
    }
    printf("\nTotal Study Hours: %.2f", total);
    printf("\nAverage Study Hours: %.2f", average);
    printf("\nMost Studied Subject: %s", subject[highest]);
    if(total >= 6)
    {
        printf("\nPerformance: Great job! Keep it up.\n");
    }
    else
    {
        printf("\nPerformance: Try to increase your study time.\n");
    }
    printf("\n================================\n");
    return 0;
}

⸻

PROJECT END
