/*
** EPITECH PROJECT, 2019
** my_game
** File description:
** lll JÖKER lll
*/

#include "my.h"


void put_gameover(init_t *elem)
{
    elem->str = "Game Over";
    elem->font = sfFont_createFromFile("police/Rough City.otf");
    elem->text = sfText_create();
    sfText_setCharacterSize(elem->text, 120);
    sfText_setColor(elem->text, sfBlack);
    sfText_setString(elem->text, elem->str);
    sfText_setFont(elem->text, elem->font);
    elem->pos_text.x = 550;
    elem->pos_text.y = 340;
    sfText_setPosition(elem->text, elem->pos_text);
    elem->point = 0;
}

void put_score(init_t *elem)
{
    elem->str = "SCORE";
    elem->font = sfFont_createFromFile("police/Rubrick.otf");
    elem->text = sfText_create();
    sfText_setCharacterSize(elem->text, 70);
    sfText_setString(elem->text, elem->str);
    sfText_setFont(elem->text, elem->font);
    elem->pos_text.x = 1350;
    elem->pos_text.y = 680;
    sfText_setPosition(elem->text, elem->pos_text);
    elem->point = 0;
}

void sound(init_t *elem)
{
    elem->sound = sfMusic_createFromFile("sound/Jill_Stark_Neon.ogg");
    sfMusic_setLoop(elem->sound, sfTrue);
    sfMusic_play(elem->sound);
}

void window(init_t *elem)
{
    elem->mode.width = 1600;
    elem->mode.height = 900;
    elem->window = sfRenderWindow_create(elem->mode, "/*   MY ARCADE GAME   */",
    sfResize | sfClose, NULL);
}

int main(void)
{
    init_t *elem = malloc(sizeof(init_t));

    before_while(elem);
    while (sfRenderWindow_isOpen(elem->window)){
        display_nb(elem);
        big_while(elem);
        end_of_second_while(elem);
    }
    destroy_motherfuker(elem);
}