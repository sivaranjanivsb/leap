# include<iostream.h>
void main()
{
int year;
cin>>year;
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
cout<<"year is leap";
}
else
{
cout<<"year is not leap";
}
}
cout<<"leap year";
}
cout<<"not a leap yaer";
}
}
