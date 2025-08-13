/* Enter the salary of employee & gives the bonus as follows:
    (1) If salary >=40000 then 30%
    (2) If salary >=30000 then 20%
    (3) If salary >=20000 then 10%  
    (4) If salary >=10000 then 5%  
    and calculate the total salary of employee as per bonus.  */
#include<iostream>
using namespace std;
int main()
{
    long int sal,bonus,T;
    cout<<"Enter the salary: ";
    cin>>sal;
    if(sal>=40000)
    {
        bonus=(sal*3)/10;
    }
    else if(sal>=30000)
    {
        bonus=(sal*2)/10;
    }
    else if(sal>=20000)
    {
        bonus=(sal*1)/10;
    }
    else if(sal>=10000)
    {
        bonus=(sal*5)/100;
    }
    else
    {
        cout<<"No bonus!";
    }
    T=sal+bonus;
    cout<<"\nBonus: "<<bonus;
    cout<<"\nTotal salary: "<<T;
}