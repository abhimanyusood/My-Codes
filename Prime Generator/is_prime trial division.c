int is_prime(unsigned int n)
{
	unsigned int p;
	if (!(n & 1) || n < 2 ) return n == 2;
 
	/* comparing p*p <= n can overflow */
	for (p = 3; p <= n/p; p += 2)
		if (!(n % p)) return 0;
	return 1;
}

int main()
{
    int in;
    for(in=0;in<1000;in++)if(is_prime(in)==1)printf("%d\n",in);
 getch();   
}
