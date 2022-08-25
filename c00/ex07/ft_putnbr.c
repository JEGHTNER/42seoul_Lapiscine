#include<unistd.h>
#include<stdio.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		ft_putchar(str[i++]);
	}
}

int ft_strlen(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
void ft_putnbr(int nb)
{
  if(nb==-2147483648)
  {
    ft_putstr("-2147483648");
    return;
  }
  else if(nb<0)
  {
    ft_putchar('-');
    nb*=-1;
  }
  if(nb>=10)
  {
    ft_putnbr(nb/10);
    ft_putnbr(nb%10);
  }
	else
	{
	  ft_putchar(nb+'0');	
	}



}
int main()
{
	ft_putnbr(-2147483648);
  ft_putnbr(42);
  ft_putnbr(-123456);
  ft_putnbr(123456);
  
}
