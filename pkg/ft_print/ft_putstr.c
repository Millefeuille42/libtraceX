//
// Created by millefeuille on 4/18/23.
//

#include "ft_print.h"

void ft_putstr(const char* str) {
	if (!str)
		return;
	size_t len = 0;
	for (; str[len]; len++) {
	}
	buffered_write(1, str, len);
}

void ft_fputstr(const char* str, const int fd) {
	if (!str || fd < 0)
		return;
	size_t len = 0;
	for (; str[len]; len++) {
	}
	buffered_write(fd, str, len);
}
