#include "monty.h"

char **opcode_toks = NULL;

/**
 * main - entry point for Monty interpreter
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: EXIT_SUCCESS on success, otherwise EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	FILE *bytecodes = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());

	bytecodes = fopen(argv[1], "r");
	if (bytecodes == NULL)
		return (f_open_error(argv[1]));

	exit_code = monty(bytecodes);
	fclose(bytecodes);
	return (exit_code);
}
