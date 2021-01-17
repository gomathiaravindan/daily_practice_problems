#include<stdio.h>
#include<math.h>
float min = 999.00;
struct Distance
{
	int x,y;
};

int distance(int x, int y)
	{
		float dist;
		dist = sqrt(pow(x,2) + pow(y,2));
		return dist;
	}
int main()
{
	int n,i;
	float ind1,ind2;
	scanf("%d",&n);
	float dist[n];
	struct Distance d[n];
	struct Distance dis;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&d[i].x,&d[i].y);
	}
	for(i=0;i<n;i++)
	{
		dist[i] = distance(d[i].x,d[i].y);
		if(min > dist[i])
		{
			min = dist[i];
			ind1=d[i].x;
			ind2= d[i].y;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.2f\n",dist[i]);
	}
	printf("The coordinates having minimum distance from the origin is: (%.0f, %.0f)",ind1,ind2);
}

