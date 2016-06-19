#include<stdio.h>
#include<conio.h>
typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int, int);
rational add_rational(rational, rational);
rational multi_rational(rational, rational);
rational equal_rational(rational, rational);
rational sub_rational(rational, rational);

void main()
{
	rational r1=makerational(1,3);
	rational r2=makerational(1,3);
	rational s=add_rational(r1,r2);
	rational m=multi_rational(r1,r2);
	rational sub=sub_rational(r1,r2);
	
	equal_rational(r1,r2);
	
	printf("\nThe sum of rational numbers is \n%d\n__\n\n%d.\n\n",s.numerator,s.denominator);
	printf("\nThe multiplication of rational numbers is \n\n%d\n__\n\n%d.",m.numerator,m.denominator);
	printf("The subtraction of rational numbers is is \n%d\n__\n\n%d",sub.numerator,sub.denominator);
};

rational makerational(int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational add_rational(rational a, rational b)
{
	rational s;
	s.numerator=(a.numerator*b.denominator)+(a.denominator*b.numerator);
	s.denominator=(a.denominator*b.denominator);
	return s;
}


  
rational sub_rational(rational a, rational b)
  {
  	rational sub;
  	sub.numerator=(a.numerator*b.denominator)-(b.numerator*a.denominator);
  	sub.denominator=a.denominator*b.denominator;
  	return sub;
  }


rational multi_rational(rational a, rational b)
{
	rational m;
	m.numerator=(a.numerator*b.numerator);
	m.denominator=(a.denominator*b.denominator);
	return m;
}

rational equal_rational(rational a, rational b)
{
	if(a.numerator==b.numerator&&a.denominator==b.denominator)
	{
		printf("The rational are EQUAL !\n");
	}
	else{
		printf("The rational aren't EQUAL!\n");
	}
}


