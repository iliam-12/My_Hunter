/*
** EPITECH PROJECT, 2019
** my_game
** File description:
** lll JÖKER lll
*/

#include "my.h"

void display_hearts(init_t *elem)
{
    display_heart(elem);
    display_heart1(elem);
    display_heart2(elem);
}

void display_nb(init_t *elem)
{
    elem->s = int_tochar(elem->point);
    elem->font_nb = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_nb = sfText_create();
    sfText_setCharacterSize(elem->text_nb, 50);
    sfText_setColor(elem->text_nb, sfWhite);
    sfText_setString(elem->text_nb, elem->s);
    sfText_setFont(elem->text_nb, elem->font_nb);
    elem->pos_nb.x = 1413;
    elem->pos_nb.y = 785;
    sfText_setPosition(elem->text_nb, elem->pos_nb);
    elem->windob = sfMouse_getPositionRenderWindow(elem->window);
    elem->cursor.x = elem->windob.x;
    elem->cursor.y = elem->windob.y;
}

void end_of_second_while(init_t *elem)
{
    render1(elem);
    clock(elem);
    restart_drag(elem);
}

const char *int_tochar(int i)
{
    int len = 0;
    int neg = 0;
    if (i == 0)
        len++;
    for (int k = i; k != 0; k = k/10, len++);
    if (i < 0) {
        len++;
        neg = 1;
        i = i * -1;
    }
    char *c = malloc(sizeof(char) * (len + 1));
    c[len] = '\0';
    len--;
    for (; len >= 0; len--) {
        c[len] = i % 10 + 48;
        i = i / 10;
    }
    if (neg)
        c[0] = '-';
    return (c);
}

void my_dragoune(init_t *elem)
{
    elem->texture_bg = sfTexture_createFromFile("sprite/landscape.png", NULL);
    elem->sprite_bg = sfSprite_create();
    sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);
    elem->texture_bird = sfTexture_createFromFile("sprite/spt_drag.png", NULL);
    elem->sprite_bird = sfSprite_create();
    sfSprite_setTexture(elem->sprite_bird, elem->texture_bird, sfTrue);
    srand(time(NULL));
    elem->pos_bird.x = 0;
    elem->pos_bird.y = rand() % 755;
    elem->size_rect.width = 135;
    elem->size_rect.height = 145;
    sfSprite_setTextureRect(elem->sprite_bird, elem->size_rect);
    elem->time2 = sfClock_create();
    elem->windob = sfMouse_getPositionRenderWindow(elem->window);
}
