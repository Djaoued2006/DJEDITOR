#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <ncurses.h>

#include "./types.h"
#include "./init.h"


POSITION get_ncurses_cursor_position() {
    size_t row, col;
    getyx(stdscr, row, col);
    return pos_init(row, col);
}

void ncurses_init() {
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
}

void ncurses_quit() {
    endwin();
}

char *get_file_content(char *filename, size_t *content_size) {
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) return NULL;

    fseek(fp, 0, SEEK_END);
    *content_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *content = (char *)malloc(sizeof(char) * ((*content_size) + 1));

    fread(content, (*content_size) * sizeof(char), 1, fp);

    content[*content_size] = NULL_TERMINATOR;

    return content;
}

#endif