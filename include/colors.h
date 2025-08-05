/* colors.h */
#ifndef COLORS_H
#define COLORS_H

// Regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

// Bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

// Background colors
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"

// Reset
#define RESET "\e[0m"

// Platform-specific color support
#ifdef _WIN32
    #include <windows.h>
    #define ENABLE_COLORS() \
        { \
            HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); \
            DWORD dwMode = 0; \
            GetConsoleMode(hOut, &dwMode); \
            dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING; \
            SetConsoleMode(hOut, dwMode); \
        }
#else
    #define ENABLE_COLORS() {}
#endif

#endif
