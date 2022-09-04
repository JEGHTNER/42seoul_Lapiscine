int main(int ac, char** av)
{
	int n=4;
	if(ac==2)
	{
		if(check_input(av[1],n)==0)
		{ 
			write(1,"error",5);
			return (0);
		}
	}
}