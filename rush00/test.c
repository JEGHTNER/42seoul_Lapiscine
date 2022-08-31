#include<unistd.h>
void    ft_putchar(char c)
{
  write(1,&c,1);
}

void check_r_zero(int x,int y,int i,int j)
{
  if((i==1||i==y)&&(j==1||j==x))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
}

void check_r_one(int x, int y, int i, int j)
{
  if((i==1 && j==1) || (i==y&&j==x))
    ft_putchar('/');
  else if((i==1 && j==x) || (i==y && j==1))
    ft_putchar('\\');
  else if((i==1 || i==y) || (j==1||j==x))
    ft_putchar('*');
  else 
    ft_putchar(' ');
}

void check_r_two(int x,int y,int i,int j)
{
  if(i==1&&(j==1||j==x))
    ft_putchar('A');
  else if((i==y&&(j==1||j==x)))
    ft_putchar('C');
  else if(i==1||i==y||j==1||j==x)
    ft_putchar('B');
  else
    ft_putchar(' ');
  
}

void check_r_three(int x,int y,int i,int j)
{
  if(j==1&&(i==1 || i==y))
    ft_putchar('A');
  else if (j==x &&(i==1||i==y))
    ft_putchar('C');
  else if(i==1||i==y||j==1||j==x)
    ft_putchar('B');
  else
    ft_putchar(' ');
}

void check_r_four(int x, int y, int i, int j)
{
  if((i==1&&j==1)||(i==y&&j==x))
    ft_putchar('A');
  else if ((i==1&&j==x)||(i==y&&j==1))
    ft_putchar('C');
  else if(i==1||i==y||j==1||j==x)
    ft_putchar('B');
  else
    ft_putchar(' ');
}


void  rush(int x, int y)
{
	int  i;
	int  j;

  i  =  1;
  
	while (i <= y)
	{
    j=1;
		while(j<=x)
		{
    //  check_r_zero(x,y,i,j);
    //  check_r_one(x,y,i,j);
    //check_r_two(x, y, i, j);
    //  check_r_three(x,y,i,j);
      check_r_four(x, y,i,j);
      j++;
    }
    ft_putchar('\n');
		i++;
  }
}

int    main()
      {
        rush(5,3);
        ft_putchar('\n');
        rush(5,1);
        ft_putchar('\n');
        rush(1,1);
        ft_putchar('\n');
        rush(1,5);
        ft_putchar('\n');
        rush(4,4);
        ft_putchar('\n');
        rush(5,4);
        ft_putchar('\n');
        return 0;
      }


