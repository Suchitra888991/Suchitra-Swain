#include<stdio.h>
#include<math.h>
struct Points{
	float x;
	float y;
};
typedef struct Points Points;
struct nodes{
	Points s[3];
	float area;
};
typedef struct nodes nodes;
nodes input_one_rectangle()
{
	nodes a;
for(int i=0;i<3;i++)
	{
		scanf("%f%f",&a.s[i].x,&a.s[i].y);
	}
return a;
}
void input_n_rectangle(int n, nodes rect[n])
{
	for(int i=0;i<n;i++)
	{
		rect[i]=input_one_rectangle();
	}
}
float Area(float x,float y,float z)
{
    if(x>y)
    {
        if(x>z)
        {
            return y*z;
        }
        else
        {
            return x*y;
        }
    }
    else if(y>z)
    {
        return x*z;
    }
    else
    {
        return x*y;
    }
    
}

void compute_one_rectangle(nodes *v)
{
	float a,b,c;
	a=sqrt(((v->s[0].x - v->s[1].x)*(v->s[0].x - v->s[1].x)) + ((v->s[0].y - v->s[1].y)*(v->s[0].y - v->s[1].y)));
	b=sqrt(((v->s[1].x - v->s[2].x)*(v->s[1].x - v->s[2].x)) + ((v->s[1].y - v->s[2].y)*(v->s[1].y - v->s[2].y)));
    c=sqrt(((v->s[2].x - v->s[0].x)*(v->s[2].x - v->s[0].x)) + ((v->s[2].y - v->s[0].y)*(v->s[2].y - v->s[0].y)));
    v->area = Area(a,b,c);
}
void compute_n_rectangles(int n, nodes rect[n] )
{
	for(int i=0;i<n;i++)
	{
		compute_one_rectangle(&rect[i]);
	}
}

void print_one_rectangle(nodes v)
{
	printf("Area of rectangle with vertices ");
	printf("(%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) ",v.s[0].x,v.s[0].y,v.s[1].x,v.s[1].y,v.s[2].x,v.s[2].y);
	printf("is %.1f \n ",v.area);
}
void print_n_rectangle(int n, nodes rect[n])
{
	for(int i=0;i<n;i++)
	{
		print_one_rectangle(rect[i]);
	}
}
int main()
{
	int n;
	nodes rect[n];
	scanf("%d",&n);
	input_n_rectangle(n,rect);
	compute_n_rectangles(n,rect);
	print_n_rectangle(n,rect);
	return 0;
}

