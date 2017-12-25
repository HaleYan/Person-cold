/*#include<iostream>
using namespace std;//2005
#include<stdio.h>
int main(){
	int year,mouth,day,sum = 0;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&year,&mouth,&day) != EOF)
	{
			if(year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0))
			{
				for(int i = 0 ; i < mouth-1 ; i++) 
				{
					sum += b[i];
				}
					sum+=day;
				}
			else 
			{
				for(int i = 0 ; i < mouth-1 ; i++) 
				{
					
					sum += a[i];
				}
					sum+=day;
				}
		printf("%d\n",sum);
		sum = 0;
		}
	return 0;
}*/


/*#include<iostream>//2006
using namespace std;
#include<stdio.h>
int main(){
	int n,m,sum = 1;
	while((scanf("%d",&n) != EOF)){
		for(int i = 0 ; i < n ; i++){
			cin >> m;
			if(m % 2 != 0)
			sum *= m;
		}
		cout << sum << endl;
		sum = 1;
	}
	
	
	return 0;
}*/



/*#include<iostream>//2007

using namespace std;

#include<stdio.h>

int main(){
	int n,m,x=0,X,y=0,Y;
	while(scanf("%d%d",&n,&m) != EOF){
		int N = n <= m ? n : m;
		int M = m > n ? m : n;
		for(int i = N ; i <= M ; i++){
			if(i%2 == 0)
			{
				X = i*i;
				x += X;
				X = 0;
			}
			else
			{
				Y = i*i*i;
				y += Y;	
				Y = 0;
			}
		}
		cout << x << " " << y << endl;
		x = y = 0;
	}
	return 0;
}*/


/*#include<iostream>

using namespace std;

#include<stdio.h>

int main(){
	int n;
	double m;
	int a = 0,b = 0,c = 0;
	while( scanf("%d",&n) != EOF){
		if(n == 0){
		break;
	}
		else if( n > 0)
		{
			for(int i = 0; i < n; i++)
			{
				cin >> m;
				if( m < 0) ++a;
				if( m == 0) ++b;
				if( m > 0) ++c;
			}
		}
		cout << a << " " << b << " " << c <<endl; 
		a = b = c = 0;
	}
	return 0;
}*/



#include<iostream>

using namespace std;

#include<stdio.h>

#include<math.h>

int main(){
	int n,m;
	double sum = 0,a;
	while((scanf("%d%d",&n,&m)) != EOF){
		a = n;
		for(int i = 1; i < m; i++){
			a = sqrt(a);
			sum += a;
		}
		sum += n;
		printf("%.2lf\n",sum);
		sum = 0;
	}
	return 0;
}















