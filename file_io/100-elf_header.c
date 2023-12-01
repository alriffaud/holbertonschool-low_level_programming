#include "main.h"

/**
 * read_elf_header - Function to read ELF header.
 * @fd: It's a pointer to the file to open.
 * @header: It's a pointer to the Elf64_Ehdr struct.
 *
 * Return: None.
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	/*Move the file pointer to the beginning.*/
	lseek(fd, 0, SEEK_SET);
	read(fd, header, sizeof(Elf64_Ehdr));
}

/**
 * header_switch1 - Switch for the print_elf_header_info function.
 * @e_ident: e_ident type.
 *
 * Return: None.
 */
void header_switch1(Elf64_Ehdr *header)
{
	switch (header->e_ident[7])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		case 3:
			printf("UNIX - NetBSD\n");
			break;
		case 7:
			printf("<unknown: 53>\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * header_switch2 - Switch for the print_elf_header_info function.
 * @e_type: e_type type.
 *
 * Return: None.
 */
void header_switch2(uint16_t e_type)
{
	switch (e_type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}
}

/**
 * print_elf_header_info - Function to print ELF header information.
 * @header: It's a pointer to the Elf64_Ehdr struct.
 *
 * Return: None.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i <= 15; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             ELF");
	printf("%d\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                              2's complement, ");
	printf("%s endian\n", header->e_ident[5] == 1 ? "little" : "big");
	printf("  Version:                           ");
	printf("%u (current)\n", header->e_version);
	printf("  OS/ABI:                            ");
	header_switch1(header);
	printf("  ABI Version:                       ");
	printf("%u\n", header->e_ident[8]);
	printf("  Type:                              ");
	header_switch2(header->e_type);
	printf("  Entry point address:               0x");
	printf("%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - This program displays the information contained in the ELF header
 * at the start of an ELF file.
 * @argc: Is the number of arguments passed to the program.
 * @av: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char **av)
{
	Elf64_Ehdr elf_header;
	int fd_from;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_filename>\n", av[0]);
		exit(98);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read_elf_header(fd_from, &elf_header);
	print_elf_header_info(&elf_header);
	close(fd_from);
	return (0);
}
