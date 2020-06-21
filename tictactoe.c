#include<stdio.h>
#include<stdlib.h>
void print_board(char board[3][3]);
int check_win(char a[3][3]);

int main()
{
    int i,m=12,n=12,x=13,y=13,k,h,win=0,turn=0,j,pos1,pos2;
    char a[3][3]={},board[3][3]={'0','1','2','3','4','5','6','7','8'};
    printf("Player 1:X\n");
    printf("Player 2:O\n");
    printf("Positions in board are\n");
    print_board(board);
    printf("\n");
		
	for(i=2;i<12;i++)
	{
		if(i==11)
		{
			printf("Draw");
			exit(0);
		}
		win=check_win(a);
		if(win==1)
		{
			printf("\nPlayer 1 wins!\n");
			exit(0);	
		}
		else if(win==2)
		{
			printf("\nPlayer 2 wins!\n");
			exit(0);
		}
		
		if(i%2==0)
		turn=1;
	    else
	    turn=2;
	    if(turn==1)
	    {
	    	printf("\nPlayer1's turn\n");
	    	printf("Choose position to place X:");
	    	scanf("%d",&pos1);
	    	if(pos1>8 || pos1<0)
	    	{
	    		printf("Invalid position\n");
	    		i--;
	    	}	
	    	else
	    	{
	    	  m=pos1/3;
	    	  n=pos1%3;
	    	  if(m==x && n==y)
	    	  {
	    		printf("Invalid position\n");
	    		i--;
	    	  }
              else
	    	  a[m][n]='X';
	    	}
	    	
	    	
	    }
	    if(turn==2)
	    {
	    	printf("\nPlayer2's turn\n");
	    	printf("Choose position to place O:");
	    	scanf("%d",&pos2);
	    	if(pos2>8 || pos2<0)
	    	{
	    		printf("Invalid position\n");
	    		i--;
	    	}	
	    	else
	    	{
	    	  x=pos2/3;
	    	  y=pos2%3;
	    	  if(x==m && y==n)
	    	  {
	    		printf("Invalid position\n");
	    		i--;
	    	  }
              else
	    	  a[x][y]='O';
	    	}

	    }
	    print_board(a);

 }

}

int check_win(char a[3][3])
{
	if(a[0][0]==a[0][1] && a[0][1]==a[0][2])
	{
		if(a[0][0]=='X')
		return 1;
		else if(a[0][0]=='O')
		return 2;	
	}
	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2])
	{
		if(a[1][0]=='X')
		return 1;

		else if(a[1][0]=='O')
		return 2;

	}
	else if(a[2][0]==a[2][1] && a[2][1]==a[2][2])
	{
		if(a[2][0]=='X')
		return 1;

		else if(a[2][0]=='O')
		return 2;
	
	}
	else if(a[0][0]==a[1][0] && a[1][0]==a[2][0])
	{
		if(a[0][0]=='X')
		return 1;

		else if(a[0][0]=='O')
		return 2;

	}
	else if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
	{
		if(a[1][1]=='X')
		return 1;

		else if(a[1][1]=='O')
		return 2;
	
	}
	else if(a[0][2]==a[1][2] && a[1][2]==a[2][2])
	{
		if(a[1][2]=='X')
		return 1;

		else if(a[1][2]=='O')
		return 2;

	}
	else if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
	{
		if(a[1][1]=='X')
		return 1;

		else if(a[1][1]=='O')
		return 2;
	}
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
	{
		if(a[1][1]=='X')
		return 1;

		else if(a[1][1]=='O')
		return 2;
	}

}
void print_board(char b[3][3])
{
	printf("\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c",b[i][j]);
	    	printf("|");
	    }
	    if(i<2)
	    {
	    	 printf("\n------\n");
	    }
	    	
	}
}

