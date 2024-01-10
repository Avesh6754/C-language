#include<stdio.h>

int part()
{
	int gun=20;
	return gun;
}
int part1()
{
	int gun=20;
	return gun;
}
int part2()
{
	int gun=20;
	return gun;
}
int sum(int gun1 ,int gun2,int gun3)
{
	int x=30+gun1+gun2+gun3;
	return x;
}
int rocky()
{
	int a=10+sum(part(),part1(),part2());
	return a;
}
main()
{
	printf("%d",rocky());
}
