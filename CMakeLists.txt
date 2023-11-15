cmake_minimum_required(VERSION 3.10)
project(libtraceX C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -std=gnu89 -pedantic -Wmissing-prototypes -Wstrict-prototypes \
        -Wold-style-definition ")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Wextra -std=gnu89 -pedantic -Wmissing-prototypes -Wstrict-prototypes \
        -Wold-style-definition")

include_directories(./pkg/ft_error)
include_directories(./pkg/ft_print)
include_directories(./pkg/ft_list)
include_directories(./pkg/ft_string)
include_directories(./pkg/ft_memory)
include_directories(./pkg/ft_log)

set(SOURCES
    pkg/ft_print/ft_putnbr_in_between.c
    pkg/ft_print/ft_putchar.c
    pkg/ft_print/ft_putstr.c
    pkg/ft_print/ft_putnbr_base_padded.c
    pkg/ft_print/ft_putnbr_base.c
    pkg/ft_print/ft_putnbr.c
    pkg/ft_print/ft_print.c
    pkg/ft_log/ft_logstr.c
    pkg/ft_log/print_level.c
    pkg/ft_log/ft_lognbr_in_between.c
    pkg/ft_log/ft_lognbr.c
    pkg/ft_error/panic.c
    pkg/ft_error/log_error.c
    pkg/ft_string/ft_string_copy.c
    pkg/ft_string/get_after_n_sep.c
    pkg/ft_string/ft_strcmp.c
    pkg/ft_string/ft_strlen.c
    pkg/ft_memory/ft_bzero.c
    cmd/trace_loop.c
    cmd/utils.c
    cmd/trace_print.c
    cmd/syscalls.c
    cmd/signals.c
    cmd/libtraceX.c

    pkg/ft_print/ft_print.h
    pkg/ft_log/ft_log.h
    pkg/ft_error/ft_error.h
    pkg/ft_memory/ft_memory.h
    pkg/ft_string/ft_string.h
    cmd/traceX.h
    cmd/libtraceX.h
    cmd/syscalls.h
)

add_library(traceX SHARED ${SOURCES})
