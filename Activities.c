/* Activities */

// votes on different activities
int  diving = 2;
int swimming = 0;
int shopping = 3;
int eat_nice_food = 4;
int dancing = 4;

int SumAllVotes(void)
{
	int total = diving + swimming + shopping + eat_nice_food + dancing;
	return total;
}