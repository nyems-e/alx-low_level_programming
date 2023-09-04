#include "main.h"


/**
 * print_magic_number - prints the ELF magic number
 * @e_ident: pointer to the ELF HEADER e_ident field
 * Return: void
 */
void print_magic_number(char *e_ident)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
	}
}



/*
 * print_error - print error
 * @message: error message
 * Return: void
 */
void print_error(const char *message)
{
	fprintf(stderr,"%s\n", message);
	exit(98);
}

/*
 * main - main function to print elf header
 * @argc - number of arguments
 * @argv - array of arguments passed
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t h_read;
	Elf64_Ehdr elf_header;
	const char *f_name = argv[1];
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	fd = open(f_name, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Cannot open file");
	}
	h_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (h_read == -1 || bytes_read != sizeof(Elf64_Ehdr))
	{
		print_error("Error: Unable to read ELF header");
	}
	
	if (memcmp(elf_header.e_ident, ELFMAG, sizeof(ELFMAG))	!= 0
	(
		print_error("Error: Not an ELF file");
	)
