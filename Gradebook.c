
#include<stdio.h>
struct student_details{
    char student_name[100];
    int scores[100];
    float avg;
    char grade;
};
typedef struct student_details students;

struct gradebook{
    char subjects[100];
    int no_of_students;
    int no_of_scores;
    float weights[100];
    students students[100];
};
typedef struct gradebook grade;

students input_one_student(int n_scores)
{
    students s;
    scanf("%s",s.student_name);
    for(int i=0;i<n_scores;i++)
    {
        scanf("%d",&s.scores[i]);
    }
    return s;
}

grade input_one_gradebook()
{
    grade book;
    scanf("%s%d%d",&book.subjects,&book.no_of_students,&book.no_of_scores);
    for(int i=0;i<book.no_of_scores;i++)
    {
        scanf("%f",&book.weights[i]);
    }
    for(int i=0;i<book.no_of_scores;i++)
    {
        book.students[i]=input_one_student(book.no_of_scores);
    }
    return book;
}

void input_n_gradebook(int n,grade subjects[n])
{
    for(int i=0;i<n;i++)
    {
        subjects[i]=input_one_gradebook();
    }
}


char grade_res(students s)
{
    if(s.avg>=60 && s.avg<70)
        s.grade='D';
    else if(s.avg>=70 && s.avg<80)
        s.grade='C';
    else if(s.avg>=80 && s.avg<90)
        s.grade='B';
    else if(s.avg>=90 && s.avg<=100)
        s.grade='A';
    else
        s.grade='F';

    return s.grade;
}

void compute_grade_one_student(grade *gb)
{
    float sum_weights=0.0,prod=0.0;
    for(int i=0;i<gb->no_of_scores;i++)
    {
        sum_weights=gb->weights[i]+sum_weights;
    }
    for(int i=0;i<gb->no_of_students;i++)
    {
        prod=0.0;
        for(int j=0;j<gb->no_of_scores;j++)
        {
            prod = prod + ((gb->weights[j])*(gb->students[i].scores[j]));
        }
        gb->students[i].avg=prod/sum_weights;
        gb->students[i].grade=grade_res(gb->students[i]);
    }
}

void compute_grade_n_student(int n,grade subjects[n])
{
    for(int i=0;i<n;i++)
    {
        compute_grade_one_student(&subjects[i]);
    }
}

void print_grade_one_student(students s)
{
    printf("%s\t%.2f\t%c\n", s.student_name, s.avg, s.grade);
}

void print_grade_n_students(int n,grade subjects[n])
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",subjects[i].subjects);
        for(int j=0;j<subjects[i].no_of_students;j++)
        {
            print_grade_one_student(subjects[i].students[j]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    grade books[n];
    input_n_gradebook(n,books);
    compute_grade_n_student(n, books);
    print_grade_n_students(n, books);
    return 0;
}
