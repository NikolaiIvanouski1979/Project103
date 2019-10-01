# include<iostream>
using namespace std;
class time
{
private:
	int hours;
	int minutes;
	int sec;
public:
	time() : hours(0), minutes(0), sec(0)
	{}
	time(int h, int m, int s) :hours(h), minutes(m), sec(s)
	{}
	void display();
	void settime(time t1, time t2);

};
void time::display()
{
	//cout << "Please! Enter number hours, minutes and seconds:" << endl;
	//cin >> hours >> minutes >> sec;
	cout << hours << ":" << minutes << ":" << sec << endl;
}
void time::settime(time t1, time t2)
{
	// cout << "Please! Enter number hours, minutes and seconds:" << endl;
	// cin >> t1.sec >> t1.minutes >> t1.hours;
	// cout << "Please! Enter number hours, minutes and seconds:" << endl;
	// cin >> t2.sec >> t2.minutes >> t2.hours;

	sec += t1.sec + t2.sec;
	if (sec > 59)
	{
		sec -= 60; minutes++;
	}
	minutes += t1.minutes + t2.minutes;
	if (minutes > 59)
	{
		minutes -= 60; hours++;
	}
	hours += t1.hours + t2.hours;
	if (hours > 23)
	{
		hours -= 24;
	}

}
int main()
{
	time t1(5, 59, 59);
	time t2(5, 59, 59);
	time t3;
	cout << "t1 = "; t1.display();
	cout << "t1 = "; t2.display();
	t3.settime(t1, t2);
	cout << "t3 ="; t3.display();
	system("pause");

	return 0;




}3