#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header_info(Elf64_Ehdr *elf_header);
/**
 * display_error_and_exit - display error message
 * @error_message: message to display
 */
void display_error_and_exit(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}
/**
 * display_elf_header_info - display info
 * @elf_header: ifnfo to be displayed
 */
void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %d-bit\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}

	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) ABI\n");
			break;
		default:
			printf("Unknown ABI\n");
			break;
	}

	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown file type\n");
			break;
	}

	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}
/**
 * main - entry point
 * @argc: number of arg
 * @argv: array of args
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	const char *file_name;
	int file_descriptor;
	ssize_t bytes_read;

	if (argc != 2)
		display_error_and_exit("Usage: elf_header elf_filename");

	file_name = argv[1];
	file_descriptor = open(file_name, O_RDONLY);

	if (file_descriptor == -1)
		display_error_and_exit("Error: Cannot open the file");

	Elf64_Ehdr elf_header;

	bytes_read = read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
		display_error_and_exit("Error: Failed to read the ELF header");

	if (lseek(file_descriptor, 0, SEEK_SET) == -1)
		display_error_and_exit("Error: Failed to seek to the beginning of the file");

	display_elf_header_info(&elf_header);

	close(file_descriptor);

	return (0);
}
