#include<stdio.h>
#include<string.h>

struct workers{
    char name[100];
    float hourly_wage;
    float minutes;
    float hours;
    float t_pay;
};
typedef struct workers workers;

void input_n_workers(int n, workers work[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%s",work[i].name);
        scanf("%f", &work[i].hourly_wage);
    }
}

int comparison(int n, workers work[n], char w_name[])
{
    for(int i=0;i<n;i++)
    {
        if(!strcmp(w_name, work[i].name))
        {
            return i;
        }
    }
    return 0;
}

void hours_worked(int n, workers work[n])
{
    int m, w_mins, in;
    char w_name[100];
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%s",w_name);
        in=comparison(n, work, w_name);
        scanf("%d",&w_mins);
        work[in].minutes = work[in].minutes + w_mins;
    }
}

void input_workers_detail(int n, workers work[n])
{
    input_n_workers(n, work);
    hours_worked(n, work);
}

void compute_workers_pay(int n, workers work[n])
{
    for(int i=0;i<n;i++)
    {
        work[i].hours = work[i].minutes/60;
        if(work[i].hours<=40)
        {
            work[i].t_pay = work[i].hourly_wage*work[i].hours;
        }
        else
        {
            work[i].t_pay=(40*work[i].hourly_wage)+((work[i].hours-40)*work[i].hourly_wage*1.5);
        }
    }
}

void print_one_worker(char name[],float hours,float t_pay)
{
    printf("%s: %.2f hours, $%.2f \n", name, hours, t_pay);
}

void print_n_workers(int n,workers work[n])
{
    for(int i=0;i<n;i++)
    {
        if(work[i].hours)
        {
            print_one_worker(work[i].name,work[i].hours,work[i].t_pay);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    workers work[n];
    input_workers_detail(n, work);
    compute_workers_pay(n, work);
    print_n_workers(n,work);
    return 0;
}
