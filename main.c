#include "testheader.h"
void testprompt(char **arguments)
{
	char /*cmd,*/ *dollar = "$ ";


	write (STDOUT_FILENO, dollar, 2);
	getspid(arguments);
	/*arguments = parse_cmdword(cmd);*/
	/*pos = execute_args(arguments, place)*/
	/*free(cmd);*/
	/*free(arguments);*/


}


int main(int argc, char **argv)
{

	char *arguments[] = {"/bin/ls", NULL};
	(void)argc;
	(void)argv;


	testprompt(arguments);
	return (0);
}
